int __fastcall sub_242338(const char *a1, _DWORD *a2)
{
  int v4; // r2
  unsigned __int8 *v5; // r3
  int v6; // r8
  int v7; // r0
  int v8; // r6
  int v9; // r2
  int v10; // r5
  unsigned __int8 *v11; // r3
  int v12; // r0
  int v13; // r6
  int v14; // r4
  unsigned __int8 *v16; // [sp+4h] [bp-8h] BYREF

  v6 = (int)strchr(a1, 46);
  if ( v6 )
  {
    v16 = (unsigned __int8 *)a1;
    v7 = sub_5AB7C(&v16, 46, v4, v5);
    v8 = v7;
    if ( v7 < 0 )
      goto LABEL_21;
    if ( !v7 )
      goto LABEL_22;
    v10 = sub_1839F8(v7);
    if ( !v10 )
      sub_946E0("No inferior number '%d'", v8);
    v11 = (unsigned __int8 *)(v6 + 1);
    v6 = 1;
    v16 = v11;
  }
  else
  {
    v16 = (unsigned __int8 *)a1;
    v10 = sub_183688();
  }
  v12 = sub_5AB7C(&v16, 0, v9, v11);
  v13 = v12;
  if ( v12 < 0 )
LABEL_21:
    sub_946E0("negative value: %s", a1);
  if ( !v12 )
LABEL_22:
    sub_242324(a1);
  v14 = dword_48A4D4;
  if ( !dword_48A4D4 )
  {
LABEL_17:
    if ( v6 | sub_2400F8() )
      sub_946E0("Unknown thread %d.%d.", *(_DWORD *)(v10 + 8), v13);
    sub_946E0("Unknown thread %d.", v13);
  }
  while ( *(_DWORD *)(v10 + 12) != ps_getpid_0(v14 + 8) || *(_DWORD *)(v14 + 24) != v13 )
  {
    v14 = *(_DWORD *)(v14 + 4);
    if ( !v14 )
      goto LABEL_17;
  }
  if ( a2 )
    *a2 = v16;
  return v14;
}
