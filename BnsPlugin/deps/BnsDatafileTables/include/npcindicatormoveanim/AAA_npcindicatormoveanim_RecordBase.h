/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct npcindicatormoveanim_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"upper_idle") == 0) return upper_idle;
			if (wcscmp(fieldName, L"lower_idle") == 0) return lower_idle;
			if (wcscmp(fieldName, L"upper_walk_front") == 0) return upper_walk_front;
			if (wcscmp(fieldName, L"lower_walk_front") == 0) return lower_walk_front;
			if (wcscmp(fieldName, L"upper_walk_back") == 0) return upper_walk_back;
			if (wcscmp(fieldName, L"lower_walk_back") == 0) return lower_walk_back;
			if (wcscmp(fieldName, L"upper_walk_left") == 0) return upper_walk_left;
			if (wcscmp(fieldName, L"lower_walk_left") == 0) return lower_walk_left;
			if (wcscmp(fieldName, L"upper_walk_right") == 0) return upper_walk_right;
			if (wcscmp(fieldName, L"lower_walk_right") == 0) return lower_walk_right;
			if (wcscmp(fieldName, L"upper_walk_leftback") == 0) return upper_walk_leftback;
			if (wcscmp(fieldName, L"lower_walk_leftback") == 0) return lower_walk_leftback;
			if (wcscmp(fieldName, L"upper_walk_rightback") == 0) return upper_walk_rightback;
			if (wcscmp(fieldName, L"lower_walk_rightback") == 0) return lower_walk_rightback;
			if (wcscmp(fieldName, L"upper_run_front") == 0) return upper_run_front;
			if (wcscmp(fieldName, L"lower_run_front") == 0) return lower_run_front;
			if (wcscmp(fieldName, L"upper_run_back") == 0) return upper_run_back;
			if (wcscmp(fieldName, L"lower_run_back") == 0) return lower_run_back;
			if (wcscmp(fieldName, L"upper_run_left") == 0) return upper_run_left;
			if (wcscmp(fieldName, L"lower_run_left") == 0) return lower_run_left;
			if (wcscmp(fieldName, L"upper_run_right") == 0) return upper_run_right;
			if (wcscmp(fieldName, L"lower_run_right") == 0) return lower_run_right;
			if (wcscmp(fieldName, L"upper_run_leftback") == 0) return upper_run_leftback;
			if (wcscmp(fieldName, L"lower_run_leftback") == 0) return lower_run_leftback;
			if (wcscmp(fieldName, L"upper_run_rightback") == 0) return upper_run_rightback;
			if (wcscmp(fieldName, L"lower_run_rightback") == 0) return lower_run_rightback;
			if (wcscmp(fieldName, L"upper_jump_front") == 0) return upper_jump_front;
			if (wcscmp(fieldName, L"lower_jump_front") == 0) return lower_jump_front;
			if (wcscmp(fieldName, L"upper_jump_left") == 0) return upper_jump_left;
			if (wcscmp(fieldName, L"lower_jump_left") == 0) return lower_jump_left;
			if (wcscmp(fieldName, L"upper_jump_right") == 0) return upper_jump_right;
			if (wcscmp(fieldName, L"lower_jump_right") == 0) return lower_jump_right;
			if (wcscmp(fieldName, L"pullout_weapon") == 0) return pullout_weapon;
			if (wcscmp(fieldName, L"putin_weapon") == 0) return putin_weapon;
			if (wcscmp(fieldName, L"putin_bare_hand") == 0) return putin_bare_hand;
			if (wcscmp(fieldName, L"upper_turn_left") == 0) return upper_turn_left;
			if (wcscmp(fieldName, L"lower_turn_left") == 0) return lower_turn_left;
			if (wcscmp(fieldName, L"upper_turn_right") == 0) return upper_turn_right;
			if (wcscmp(fieldName, L"lower_turn_right") == 0) return lower_turn_right;
			if (wcscmp(fieldName, L"upper_jtoi") == 0) return upper_jtoi;
			if (wcscmp(fieldName, L"lower_jtoi") == 0) return lower_jtoi;
			if (wcscmp(fieldName, L"upper_jtomfront") == 0) return upper_jtomfront;
			if (wcscmp(fieldName, L"lower_jtomfront") == 0) return lower_jtomfront;
			if (wcscmp(fieldName, L"upper_jtomleft") == 0) return upper_jtomleft;
			if (wcscmp(fieldName, L"lower_jtomleft") == 0) return lower_jtomleft;
			if (wcscmp(fieldName, L"upper_jtomright") == 0) return upper_jtomright;
			if (wcscmp(fieldName, L"lower_jtomright") == 0) return lower_jtomright;
			if (wcscmp(fieldName, L"upper_jtomback") == 0) return upper_jtomback;
			if (wcscmp(fieldName, L"lower_jtomback") == 0) return lower_jtomback;
			if (wcscmp(fieldName, L"upper_mtojfront") == 0) return upper_mtojfront;
			if (wcscmp(fieldName, L"lower_mtojfront") == 0) return lower_mtojfront;
			if (wcscmp(fieldName, L"upper_mtojleft") == 0) return upper_mtojleft;
			if (wcscmp(fieldName, L"lower_mtojleft") == 0) return lower_mtojleft;
			if (wcscmp(fieldName, L"upper_mtojright") == 0) return upper_mtojright;
			if (wcscmp(fieldName, L"lower_mtojright") == 0) return lower_mtojright;
			if (wcscmp(fieldName, L"upper_mtoi") == 0) return upper_mtoi;
			if (wcscmp(fieldName, L"lower_mtoi") == 0) return lower_mtoi;
			if (wcscmp(fieldName, L"upper_ltor") == 0) return upper_ltor;
			if (wcscmp(fieldName, L"lower_ltor") == 0) return lower_ltor;
			if (wcscmp(fieldName, L"upper_rtol") == 0) return upper_rtol;
			if (wcscmp(fieldName, L"lower_rtol") == 0) return lower_rtol;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"upper_idle") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_idle);
			if (wcscmp(fieldName, L"lower_idle") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_idle);
			if (wcscmp(fieldName, L"upper_walk_front") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_walk_front);
			if (wcscmp(fieldName, L"lower_walk_front") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_walk_front);
			if (wcscmp(fieldName, L"upper_walk_back") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_walk_back);
			if (wcscmp(fieldName, L"lower_walk_back") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_walk_back);
			if (wcscmp(fieldName, L"upper_walk_left") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_walk_left);
			if (wcscmp(fieldName, L"lower_walk_left") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_walk_left);
			if (wcscmp(fieldName, L"upper_walk_right") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_walk_right);
			if (wcscmp(fieldName, L"lower_walk_right") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_walk_right);
			if (wcscmp(fieldName, L"upper_walk_leftback") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_walk_leftback);
			if (wcscmp(fieldName, L"lower_walk_leftback") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_walk_leftback);
			if (wcscmp(fieldName, L"upper_walk_rightback") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_walk_rightback);
			if (wcscmp(fieldName, L"lower_walk_rightback") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_walk_rightback);
			if (wcscmp(fieldName, L"upper_run_front") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_run_front);
			if (wcscmp(fieldName, L"lower_run_front") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_run_front);
			if (wcscmp(fieldName, L"upper_run_back") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_run_back);
			if (wcscmp(fieldName, L"lower_run_back") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_run_back);
			if (wcscmp(fieldName, L"upper_run_left") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_run_left);
			if (wcscmp(fieldName, L"lower_run_left") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_run_left);
			if (wcscmp(fieldName, L"upper_run_right") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_run_right);
			if (wcscmp(fieldName, L"lower_run_right") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_run_right);
			if (wcscmp(fieldName, L"upper_run_leftback") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_run_leftback);
			if (wcscmp(fieldName, L"lower_run_leftback") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_run_leftback);
			if (wcscmp(fieldName, L"upper_run_rightback") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_run_rightback);
			if (wcscmp(fieldName, L"lower_run_rightback") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_run_rightback);
			if (wcscmp(fieldName, L"upper_jump_front") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_jump_front);
			if (wcscmp(fieldName, L"lower_jump_front") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_jump_front);
			if (wcscmp(fieldName, L"upper_jump_left") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_jump_left);
			if (wcscmp(fieldName, L"lower_jump_left") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_jump_left);
			if (wcscmp(fieldName, L"upper_jump_right") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_jump_right);
			if (wcscmp(fieldName, L"lower_jump_right") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_jump_right);
			if (wcscmp(fieldName, L"pullout_weapon") == 0) return Data::AnyFieldToStringConverter::ToString(&pullout_weapon);
			if (wcscmp(fieldName, L"putin_weapon") == 0) return Data::AnyFieldToStringConverter::ToString(&putin_weapon);
			if (wcscmp(fieldName, L"putin_bare_hand") == 0) return Data::AnyFieldToStringConverter::ToString(&putin_bare_hand);
			if (wcscmp(fieldName, L"upper_turn_left") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_turn_left);
			if (wcscmp(fieldName, L"lower_turn_left") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_turn_left);
			if (wcscmp(fieldName, L"upper_turn_right") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_turn_right);
			if (wcscmp(fieldName, L"lower_turn_right") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_turn_right);
			if (wcscmp(fieldName, L"upper_jtoi") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_jtoi);
			if (wcscmp(fieldName, L"lower_jtoi") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_jtoi);
			if (wcscmp(fieldName, L"upper_jtomfront") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_jtomfront);
			if (wcscmp(fieldName, L"lower_jtomfront") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_jtomfront);
			if (wcscmp(fieldName, L"upper_jtomleft") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_jtomleft);
			if (wcscmp(fieldName, L"lower_jtomleft") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_jtomleft);
			if (wcscmp(fieldName, L"upper_jtomright") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_jtomright);
			if (wcscmp(fieldName, L"lower_jtomright") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_jtomright);
			if (wcscmp(fieldName, L"upper_jtomback") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_jtomback);
			if (wcscmp(fieldName, L"lower_jtomback") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_jtomback);
			if (wcscmp(fieldName, L"upper_mtojfront") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_mtojfront);
			if (wcscmp(fieldName, L"lower_mtojfront") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_mtojfront);
			if (wcscmp(fieldName, L"upper_mtojleft") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_mtojleft);
			if (wcscmp(fieldName, L"lower_mtojleft") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_mtojleft);
			if (wcscmp(fieldName, L"upper_mtojright") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_mtojright);
			if (wcscmp(fieldName, L"lower_mtojright") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_mtojright);
			if (wcscmp(fieldName, L"upper_mtoi") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_mtoi);
			if (wcscmp(fieldName, L"lower_mtoi") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_mtoi);
			if (wcscmp(fieldName, L"upper_ltor") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_ltor);
			if (wcscmp(fieldName, L"lower_ltor") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_ltor);
			if (wcscmp(fieldName, L"upper_rtol") == 0) return Data::AnyFieldToStringConverter::ToString(&upper_rtol);
			if (wcscmp(fieldName, L"lower_rtol") == 0) return Data::AnyFieldToStringConverter::ToString(&lower_rtol);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(upper_idle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_idle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_idle));
			if (reinterpret_cast<std::uintptr_t>(lower_idle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_idle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_idle));
			if (reinterpret_cast<std::uintptr_t>(upper_walk_front) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_walk_front = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_walk_front));
			if (reinterpret_cast<std::uintptr_t>(lower_walk_front) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_walk_front = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_walk_front));
			if (reinterpret_cast<std::uintptr_t>(upper_walk_back) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_walk_back = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_walk_back));
			if (reinterpret_cast<std::uintptr_t>(lower_walk_back) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_walk_back = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_walk_back));
			if (reinterpret_cast<std::uintptr_t>(upper_walk_left) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_walk_left = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_walk_left));
			if (reinterpret_cast<std::uintptr_t>(lower_walk_left) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_walk_left = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_walk_left));
			if (reinterpret_cast<std::uintptr_t>(upper_walk_right) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_walk_right = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_walk_right));
			if (reinterpret_cast<std::uintptr_t>(lower_walk_right) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_walk_right = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_walk_right));
			if (reinterpret_cast<std::uintptr_t>(upper_walk_leftback) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_walk_leftback = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_walk_leftback));
			if (reinterpret_cast<std::uintptr_t>(lower_walk_leftback) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_walk_leftback = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_walk_leftback));
			if (reinterpret_cast<std::uintptr_t>(upper_walk_rightback) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_walk_rightback = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_walk_rightback));
			if (reinterpret_cast<std::uintptr_t>(lower_walk_rightback) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_walk_rightback = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_walk_rightback));
			if (reinterpret_cast<std::uintptr_t>(upper_run_front) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_run_front = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_run_front));
			if (reinterpret_cast<std::uintptr_t>(lower_run_front) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_run_front = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_run_front));
			if (reinterpret_cast<std::uintptr_t>(upper_run_back) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_run_back = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_run_back));
			if (reinterpret_cast<std::uintptr_t>(lower_run_back) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_run_back = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_run_back));
			if (reinterpret_cast<std::uintptr_t>(upper_run_left) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_run_left = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_run_left));
			if (reinterpret_cast<std::uintptr_t>(lower_run_left) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_run_left = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_run_left));
			if (reinterpret_cast<std::uintptr_t>(upper_run_right) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_run_right = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_run_right));
			if (reinterpret_cast<std::uintptr_t>(lower_run_right) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_run_right = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_run_right));
			if (reinterpret_cast<std::uintptr_t>(upper_run_leftback) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_run_leftback = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_run_leftback));
			if (reinterpret_cast<std::uintptr_t>(lower_run_leftback) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_run_leftback = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_run_leftback));
			if (reinterpret_cast<std::uintptr_t>(upper_run_rightback) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_run_rightback = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_run_rightback));
			if (reinterpret_cast<std::uintptr_t>(lower_run_rightback) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_run_rightback = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_run_rightback));
			if (reinterpret_cast<std::uintptr_t>(upper_jump_front) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_jump_front = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_jump_front));
			if (reinterpret_cast<std::uintptr_t>(lower_jump_front) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_jump_front = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_jump_front));
			if (reinterpret_cast<std::uintptr_t>(upper_jump_left) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_jump_left = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_jump_left));
			if (reinterpret_cast<std::uintptr_t>(lower_jump_left) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_jump_left = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_jump_left));
			if (reinterpret_cast<std::uintptr_t>(upper_jump_right) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_jump_right = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_jump_right));
			if (reinterpret_cast<std::uintptr_t>(lower_jump_right) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_jump_right = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_jump_right));
			if (reinterpret_cast<std::uintptr_t>(pullout_weapon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) pullout_weapon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(pullout_weapon));
			if (reinterpret_cast<std::uintptr_t>(putin_weapon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) putin_weapon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(putin_weapon));
			if (reinterpret_cast<std::uintptr_t>(putin_bare_hand) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) putin_bare_hand = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(putin_bare_hand));
			if (reinterpret_cast<std::uintptr_t>(upper_turn_left) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_turn_left = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_turn_left));
			if (reinterpret_cast<std::uintptr_t>(lower_turn_left) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_turn_left = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_turn_left));
			if (reinterpret_cast<std::uintptr_t>(upper_turn_right) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_turn_right = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_turn_right));
			if (reinterpret_cast<std::uintptr_t>(lower_turn_right) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_turn_right = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_turn_right));
			if (reinterpret_cast<std::uintptr_t>(upper_jtoi) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_jtoi = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_jtoi));
			if (reinterpret_cast<std::uintptr_t>(lower_jtoi) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_jtoi = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_jtoi));
			if (reinterpret_cast<std::uintptr_t>(upper_jtomfront) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_jtomfront = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_jtomfront));
			if (reinterpret_cast<std::uintptr_t>(lower_jtomfront) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_jtomfront = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_jtomfront));
			if (reinterpret_cast<std::uintptr_t>(upper_jtomleft) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_jtomleft = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_jtomleft));
			if (reinterpret_cast<std::uintptr_t>(lower_jtomleft) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_jtomleft = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_jtomleft));
			if (reinterpret_cast<std::uintptr_t>(upper_jtomright) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_jtomright = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_jtomright));
			if (reinterpret_cast<std::uintptr_t>(lower_jtomright) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_jtomright = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_jtomright));
			if (reinterpret_cast<std::uintptr_t>(upper_jtomback) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_jtomback = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_jtomback));
			if (reinterpret_cast<std::uintptr_t>(lower_jtomback) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_jtomback = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_jtomback));
			if (reinterpret_cast<std::uintptr_t>(upper_mtojfront) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_mtojfront = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_mtojfront));
			if (reinterpret_cast<std::uintptr_t>(lower_mtojfront) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_mtojfront = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_mtojfront));
			if (reinterpret_cast<std::uintptr_t>(upper_mtojleft) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_mtojleft = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_mtojleft));
			if (reinterpret_cast<std::uintptr_t>(lower_mtojleft) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_mtojleft = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_mtojleft));
			if (reinterpret_cast<std::uintptr_t>(upper_mtojright) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_mtojright = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_mtojright));
			if (reinterpret_cast<std::uintptr_t>(lower_mtojright) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_mtojright = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_mtojright));
			if (reinterpret_cast<std::uintptr_t>(upper_mtoi) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_mtoi = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_mtoi));
			if (reinterpret_cast<std::uintptr_t>(lower_mtoi) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_mtoi = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_mtoi));
			if (reinterpret_cast<std::uintptr_t>(upper_ltor) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_ltor = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_ltor));
			if (reinterpret_cast<std::uintptr_t>(lower_ltor) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_ltor = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_ltor));
			if (reinterpret_cast<std::uintptr_t>(upper_rtol) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) upper_rtol = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(upper_rtol));
			if (reinterpret_cast<std::uintptr_t>(lower_rtol) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lower_rtol = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lower_rtol));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* upper_idle;
wchar_t* lower_idle;
wchar_t* upper_walk_front;
wchar_t* lower_walk_front;
wchar_t* upper_walk_back;
wchar_t* lower_walk_back;
wchar_t* upper_walk_left;
wchar_t* lower_walk_left;
wchar_t* upper_walk_right;
wchar_t* lower_walk_right;
wchar_t* upper_walk_leftback;
wchar_t* lower_walk_leftback;
wchar_t* upper_walk_rightback;
wchar_t* lower_walk_rightback;
wchar_t* upper_run_front;
wchar_t* lower_run_front;
wchar_t* upper_run_back;
wchar_t* lower_run_back;
wchar_t* upper_run_left;
wchar_t* lower_run_left;
wchar_t* upper_run_right;
wchar_t* lower_run_right;
wchar_t* upper_run_leftback;
wchar_t* lower_run_leftback;
wchar_t* upper_run_rightback;
wchar_t* lower_run_rightback;
wchar_t* upper_jump_front;
wchar_t* lower_jump_front;
wchar_t* upper_jump_left;
wchar_t* lower_jump_left;
wchar_t* upper_jump_right;
wchar_t* lower_jump_right;
wchar_t* pullout_weapon;
wchar_t* putin_weapon;
wchar_t* putin_bare_hand;
wchar_t* upper_turn_left;
wchar_t* lower_turn_left;
wchar_t* upper_turn_right;
wchar_t* lower_turn_right;
wchar_t* upper_jtoi;
wchar_t* lower_jtoi;
wchar_t* upper_jtomfront;
wchar_t* lower_jtomfront;
wchar_t* upper_jtomleft;
wchar_t* lower_jtomleft;
wchar_t* upper_jtomright;
wchar_t* lower_jtomright;
wchar_t* upper_jtomback;
wchar_t* lower_jtomback;
wchar_t* upper_mtojfront;
wchar_t* lower_mtojfront;
wchar_t* upper_mtojleft;
wchar_t* lower_mtojleft;
wchar_t* upper_mtojright;
wchar_t* lower_mtojright;
wchar_t* upper_mtoi;
wchar_t* lower_mtoi;
wchar_t* upper_ltor;
wchar_t* lower_ltor;
wchar_t* upper_rtol;
wchar_t* lower_rtol;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 256; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npcindicatormoveanim_RecordPtr // : DrRecordPtr
	{
		npcindicatormoveanim_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::npcindicatormoveanim_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}