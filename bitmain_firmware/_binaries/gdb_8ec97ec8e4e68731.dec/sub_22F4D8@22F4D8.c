int __fastcall sub_22F4D8(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, __int64 *a9)
{
  int v12; // r5
  int v14; // r0
  int v15; // [sp+4h] [bp-20h]

  do
  {
    v12 = ((int (__fastcall *)(int *, int, _DWORD, int, int, int, int, int, int, int, __int64 *))a1[97])(
            a1,
            2,
            0,
            a2,
            a3,
            v15,
            a5,
            a6,
            a7,
            a8,
            a9);
    if ( v12 == 1 )
      break;
    if ( v12 == 2 )
      break;
    if ( ((int (*)(void))a1[79])() )
      break;
    a1 = (int *)*a1;
  }
  while ( a1 );
  if ( a3 && !sub_98F78(&dword_4878EC, &dword_475848) && sub_234854() && (sub_234988() || sub_234998()) )
  {
    v14 = sub_234910();
    sub_10A218(v14, v12, a5, a3, *a9);
  }
  return v12;
}
