void __fastcall sub_FF074(const char *a1, char *s)
{
  int v3; // r0
  _DWORD *v4; // r0
  int v5; // r5
  _DWORD *v6; // r1
  size_t v8; // r6
  size_t v9; // r7
  const char *v10; // r0
  const char *v11; // r1
  _DWORD savedregs[6]; // [sp+0h] [bp-14h] BYREF

  if ( *s )
  {
    v8 = strlen(s);
    v9 = strlen(a1);
    v10 = (const char *)memcpy(savedregs, s, v8);
    v11 = a1;
    a1 = v10;
    *(_WORD *)&v10[v8] = *(_WORD *)"::";
    memcpy((void *)&v10[v8 + 2], v11, v9 + 1);
  }
  v3 = sub_20F388(0);
  v4 = (_DWORD *)sub_C2668(v3);
  v5 = (int)v4;
  if ( v4 )
    sub_FED48(a1, v4);
  v6 = (_DWORD *)sub_C269C(v5);
  if ( v6 )
    sub_FED48(a1, v6);
}
