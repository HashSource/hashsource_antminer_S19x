int __fastcall sub_2A22C(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r8
  const char *v9; // r3
  int v10; // r4
  unsigned int v11; // r5
  unsigned __int16 *v12; // r6
  int v13; // t1
  _DWORD *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  int result; // r0
  int v19; // r4
  const char *v20; // r5
  const char *v21; // r3
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // [sp+8h] [bp-24h]
  int v25; // [sp+Ch] [bp-20h]
  int v26; // [sp+18h] [bp-14h]

  v26 = sub_163E78(a1);
  v7 = ((int (__fastcall *)(int))loc_165C28)(a1);
  v24 = v7;
  if ( *(_DWORD *)(a4 + 164) )
  {
    if ( !*(_DWORD *)(a4 + 200) )
    {
      v17 = a3;
      goto LABEL_16;
    }
    v25 = 2;
    v8 = 2;
  }
  else
  {
    if ( !*(_DWORD *)(a4 + 200) )
    {
      v17 = a3;
      goto LABEL_13;
    }
    v8 = 4;
    v25 = 4;
  }
  v9 = "displaced: writing insn ";
  v10 = 0;
  v11 = 0;
  v12 = (unsigned __int16 *)(a4 + 168);
  do
  {
    if ( dword_487978 )
    {
      v14 = (_DWORD *)sub_242FC8(v7);
      v15 = sub_2594B0(*v14, "displaced: writing insn ");
      v22 = (_DWORD *)sub_242FC8(v15);
      if ( v8 == 4 )
        v23 = sub_2594B0(*v22, "%.8lx", *(_DWORD *)v12);
      else
        v23 = sub_2594B0(*v22, "%.4x", *v12);
      v16 = (_DWORD *)sub_242FC8(v23);
      sub_2594B0(*v16, " at %.8lx\n", a3 + v10);
    }
    v13 = *(_DWORD *)v12;
    v12 += 2;
    ++v11;
    v7 = sub_FAB2C(a3 + v10, v8, v24, v9, v13, 0);
    v9 = *(const char **)(a4 + 200);
    v10 += v25;
  }
  while ( (unsigned int)v9 > v11 );
  v17 = a3 + v10;
  if ( !*(_DWORD *)(a4 + 164) )
  {
LABEL_13:
    result = sub_FAAE0(v17, *(_DWORD *)(v26 + 40));
    if ( !dword_487978 )
      return result;
LABEL_17:
    v19 = *(_DWORD *)sub_242FC8(result);
    v20 = (const char *)sub_25AC8C(a1, a2);
    v21 = (const char *)sub_25AC8C(a1, a3);
    return sub_2594B0(v19, "displaced: copy %s->%s: ", v20, v21);
  }
LABEL_16:
  result = sub_FAAE0(v17, *(_DWORD *)(v26 + 48));
  if ( dword_487978 )
    goto LABEL_17;
  return result;
}
