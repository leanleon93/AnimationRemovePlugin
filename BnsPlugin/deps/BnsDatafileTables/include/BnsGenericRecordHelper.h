/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once

namespace Data
{
    template <typename T>
	concept HasAutoCorrectLookupOffsets = requires(T t, const char* ptr) {
		{ t.AutoCorrectLookupOffsets(ptr) } -> std::same_as<void>;
	};

    // GetField(const wchar_t* fieldName)
    template <typename T>
    concept HasGetField = requires(T t, const wchar_t* fieldName) {
        { t.GetField(fieldName) } -> std::same_as<std::any>;
    };

	template <typename T>
	concept HasGetAndAutoCorrectField = HasGetField<T> && HasAutoCorrectLookupOffsets<T>;

    class BnsGenericRecordHelper
    {
    private:
        
        template <HasGetAndAutoCorrectField T>
        static T* CastToSpecific(DrEl *table, DataView* lookupDataView)
        {
            T* specific = static_cast<T*>(table);
			specific->AutoCorrectLookupOffsets(lookupDataView->Data);
			return specific;
        }

        template <HasGetAndAutoCorrectField T>
		static std::any GetField(RecordResult* recordResult, const wchar_t* fieldName)
		{
			if (recordResult->recordDataView == nullptr || recordResult->recordDataView->Data == nullptr) {
				return std::any {};
			}
			auto* table = const_cast<DrEl*>(reinterpret_cast<const DrEl*>(recordResult->recordDataView->Data));
			auto* specific = CastToSpecific<T>(table, recordResult->lookupDataView);
			return specific->GetField(fieldName);
		}

    public:
        static std::any GetField(__int16 tableId, RecordResult* recordResult, const wchar_t* fieldName);
    };
}