int __fastcall sub_201E58(int a1)
{
  int v1; // r0
  int result; // r0
  int (*v3)(void); // r3

  v1 = sub_16F654(a1);
  result = ((int (__fastcall *)(int, int))loc_16EC88)(v1, dword_4893A0);
  v3 = *(int (**)(void))(*(_DWORD *)result + 52);
  if ( v3 )
    return v3();
  return result;
}
