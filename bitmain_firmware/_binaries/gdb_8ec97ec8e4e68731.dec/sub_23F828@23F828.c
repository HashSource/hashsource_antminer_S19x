bool __fastcall sub_23F828(int a1, int a2, int a3)
{
  return (dword_475848 != a1 || __PAIR64__(a3, a2) != qword_47584C)
      && !sub_23DA74(a1, a2, a3, 2)
      && ((int (__fastcall *)(int, int, int))loc_23F1FC)(a1, a2, a3) == 0;
}
