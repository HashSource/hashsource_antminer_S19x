unsigned int __fastcall sub_E9498(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int *a4,
        unsigned int a5,
        void (__fastcall *a6)(int *, int *, int))
{
  int v6; // r5
  int v9; // r7
  unsigned int v10; // r6
  int v12; // r1
  int v13; // [sp+8h] [bp-18h] BYREF
  unsigned int v14; // [sp+Ch] [bp-14h]
  _DWORD v15[4]; // [sp+10h] [bp-10h] BYREF

  v6 = a5 & 7;
  if ( (a5 & 7) != 0 )
    return 0;
  if ( a5 - 16 > 0x7FFFFFEF )
    return v6;
  if ( a5 == 16 )
  {
    a6(a4, v15, a1);
    v9 = 8;
    v13 = v15[0];
    v14 = v15[1];
    v12 = v15[3];
    *(_DWORD *)a3 = v15[2];
    *(_DWORD *)(a3 + 4) = v12;
    sub_E07F8(v15, 0x10u);
  }
  else
  {
    v9 = sub_E91C0(a1, &v13, (char *)a3, a4, a5, a6);
    if ( a5 - 8 != v9 )
      goto LABEL_14;
  }
  if ( a2 )
  {
    if ( sub_BC33C((unsigned __int8 *)&v13, a2, 4) )
      goto LABEL_14;
  }
  else if ( sub_BC33C((unsigned __int8 *)&v13, (unsigned __int8 *)&dword_1B65E0, 4) )
  {
    goto LABEL_14;
  }
  v10 = bswap32(v14);
  if ( v10 > 8 * ((a5 >> 3) + 536870910)
    && v10 <= 8 * ((a5 >> 3) - 1)
    && !sub_BC33C((unsigned __int8 *)(a3 + v10), byte_6E1A88, v9 - v10) )
  {
    return v10;
  }
LABEL_14:
  sub_E07F8((void *)a3, a5);
  return 0;
}
