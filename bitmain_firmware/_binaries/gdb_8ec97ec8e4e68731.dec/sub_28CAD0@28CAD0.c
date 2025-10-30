int sub_28CAD0()
{
  size_t v0; // r0
  const char *v1; // r5
  const char *v2; // r6
  char *v3; // r0
  signed int v4; // r5
  int v5; // r6
  int v6; // r1
  signed int v7; // r3
  int v8; // r2
  int v9; // r0
  int v10; // r1
  int v11; // r1

  v0 = strlen((const char *)dword_48AAA4);
  sub_28C270((char *)(v0 + 1));
  v1 = (const char *)dword_48AE0C;
  if ( !dword_48AE0C )
    v1 = (const char *)dword_48AAA4;
  strcpy(*(char **)off_470780, v1);
  strcpy(*(char **)off_47077C[0], v1);
  v2 = (const char *)dword_48AAA4;
  v3 = strrchr((const char *)dword_48AAA4, 10);
  if ( v3 )
    v2 = v3;
  v4 = strlen(v2);
  if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
    dword_48AE04 = v4;
  else
    dword_48AE04 = sub_28C428(v2, 0, v4, 1);
  v5 = dword_490144;
  if ( !dword_4707A0 )
    v5 = dword_490144 + 1;
  dword_48AE2C = sub_347924(v4, v5);
  if ( v4 && !v6 )
    sub_294504((int)&word_356638, 1u);
  v7 = 0;
  v8 = 0;
  dword_48AE30 = 0;
  v9 = *(_DWORD *)(off_470780 + 4);
  v10 = v9 - 4;
  do
  {
    dword_48AE34 = v8++;
    *(_DWORD *)(v10 + 4) = v7;
    v10 += 4;
    v7 += v5;
  }
  while ( v4 >= v7 );
  v11 = dword_48AAA4;
  *(_DWORD *)(v9 + 4 * v8) = v4;
  dword_48AE38 = 0;
  dword_48AE3C = v11;
  return 0;
}
