int __fastcall sub_B8014(int a1, int a2, int *a3, _QWORD *a4)
{
  int v7; // r7
  int v8; // r7
  int result; // r0
  __int64 v10; // r0

  if ( ((int (*)(void))loc_167A98)() >= 0 )
  {
    v7 = ((int (__fastcall *)(int))loc_167A98)(a1);
    if ( v7 < ((int (__fastcall *)(int))loc_166E9C)(a1) )
    {
      result = ((int (__fastcall *)(int))loc_167A98)(a1);
      *a3 = result;
      goto LABEL_6;
    }
  }
  if ( ((int (__fastcall *)(int))loc_1672F0)(a1) >= 0 )
  {
    v8 = ((int (__fastcall *)(int))loc_1672F0)(a1);
    if ( v8 < ((int (__fastcall *)(int))loc_166E9C)(a1) )
    {
      result = ((int (__fastcall *)(int))loc_1672F0)(a1);
      *a3 = result;
LABEL_6:
      *a4 = 0;
      return result;
    }
  }
  v10 = sub_94700((int)"arch-utils.c", 220, "No virtual frame pointer available");
  return sub_B80BC(v10, HIDWORD(v10));
}
