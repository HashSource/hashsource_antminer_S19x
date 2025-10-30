char *__fastcall sub_88590(int a1, int a2)
{
  int v3; // r0
  const char *v4; // r4
  int v5; // t1
  char *v6; // r0
  char *v7; // r5
  size_t v8; // r9
  void *v9; // r8
  int v11; // [sp+4h] [bp-10h]

  v3 = dword_108358;
  v4 = (const char *)(a2 + 1);
  if ( !dword_108358 )
  {
    v11 = a2;
    v3 = sub_7F738(12);
    a2 = v11;
  }
  if ( *(_BYTE *)(v3 + *(unsigned __int8 *)(a2 + 1)) )
  {
    do
      v5 = *(unsigned __int8 *)++v4;
    while ( *(_BYTE *)(v3 + v5) );
  }
  v6 = strchr(v4, 62);
  v7 = v6;
  if ( v6 )
  {
    v8 = v6 - v4;
    v7 = v6 + 1;
    v9 = sub_7FBE0(v6 - v4 + 1);
    memcpy(v9, v4, v8);
    *((_BYTE *)v9 + v8) = 0;
    sub_88348((int *)(a1 + 12), (unsigned __int8 *)v9);
    free(v9);
  }
  return v7;
}
