int __fastcall sub_2484C(int a1, int a2)
{
  int v3; // r4
  int v4; // r0
  int v5; // r5
  const char *v6; // r6
  _DWORD *v8; // r0
  int v9; // r0
  const char *v10; // r4
  int v11; // r0
  _DWORD v12[3]; // [sp+0h] [bp-Ch] BYREF

  v3 = a2;
  v4 = sub_187B78(a2);
  v5 = v4;
  if ( v4 )
  {
    if ( dword_487978 )
    {
      v8 = (_DWORD *)sub_242FC8(v4);
      sub_2594B0(*v8, "displaced: check mode of %.8lx instead of %.8lx\n", *(_DWORD *)(v5 + 204), v3);
    }
    v3 = *(_DWORD *)(v5 + 204);
  }
  if ( (v3 & 1) != 0 )
    return 1;
  v6 = off_46961C[0];
  if ( !strcmp(off_46961C[0], "arm") )
    return 0;
  if ( !strcmp(v6, "thumb") || *(_DWORD *)(sub_163E78(a1) + 32) )
    return 1;
  v9 = ((int (__fastcall *)(int))loc_21A28)(v3);
  if ( v9 )
    return v9 == 116;
  sub_1B240C(v12, v3);
  if ( v12[0] )
    return (*(unsigned __int8 *)(v12[0] + 32) >> 5) & 1;
  v10 = off_469620[0];
  if ( !strcmp(off_469620[0], "arm") )
    return 0;
  if ( !strcmp(v10, "thumb") )
    return 1;
  if ( !sub_22EB0C() )
    return 0;
  v11 = sub_15F70C();
  return sub_2376C(v11);
}
