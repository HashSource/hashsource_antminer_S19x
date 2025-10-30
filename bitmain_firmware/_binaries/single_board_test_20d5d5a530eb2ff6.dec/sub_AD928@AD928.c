int __fastcall sub_AD928(int *a1, int a2)
{
  int *v4; // r0
  int v5; // r4
  int v6; // r1
  int v7; // r0
  _DWORD *v9; // [sp+Ch] [bp-94h] BYREF
  _DWORD v10[36]; // [sp+10h] [bp-90h] BYREF

  while ( 1 )
  {
    v9 = v10;
    v10[0] = a2;
    if ( !dword_6DF3A4 )
      break;
    v6 = sub_10BC4C(dword_6DF3A4, v10);
    if ( v6 < 0 )
      break;
    v5 = sub_10C01C(dword_6DF3A4, v6);
    if ( !v5 )
      goto LABEL_9;
LABEL_4:
    if ( (*(_DWORD *)(v5 + 8) & 1) == 0 )
      goto LABEL_9;
    a2 = *(_DWORD *)(v5 + 4);
  }
  v4 = (int *)sub_EAC70(&v9, &off_21F688, 20, 4, sub_AD8C8);
  if ( v4 )
  {
    v5 = *v4;
    if ( *v4 )
      goto LABEL_4;
  }
  v5 = 0;
LABEL_9:
  if ( a1 )
  {
    v7 = sub_CEDEC(a2);
    *a1 = v7;
    if ( v7 )
      return sub_CEE00(v7, a2);
  }
  return v5;
}
