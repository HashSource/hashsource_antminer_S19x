void *__fastcall sub_F29E8(int a1, int a2, int a3)
{
  const char *v4; // r4
  void *result; // r0
  int v7; // r3
  const char *v8; // r4
  int v9; // t1
  unsigned int v10; // r2
  _DWORD *v11; // r0
  _DWORD *v12; // r3
  __int64 v13; // r2

  v4 = *(const char **)a2;
  result = (void *)strcmp(*(const char **)a2, ".text");
  if ( !result )
  {
    LODWORD(v13) = *(_DWORD *)(a2 + 28);
    HIDWORD(v13) = *(_DWORD *)(a3 + 20) + *(_DWORD *)(a2 + 36);
    *(_QWORD *)(a3 + 16) = v13;
    return result;
  }
  result = (void *)strncmp(v4, ".text", 5u);
  if ( !result )
  {
    *(_DWORD *)(a3 + 20) += *(_DWORD *)(a2 + 36);
    return result;
  }
  result = (void *)strcmp(v4, ".stabstr");
  if ( !result )
  {
    *(_DWORD *)(a3 + 28) = a2;
    return result;
  }
  result = (void *)strncmp(v4, ".stab", 5u);
  if ( result )
    return result;
  v7 = *((unsigned __int8 *)v4 + 5);
  v8 = v4 + 5;
  if ( v7 )
  {
    if ( (unsigned int)(v7 - 48) > 9 )
      return result;
    while ( 1 )
    {
      v9 = *(unsigned __int8 *)++v8;
      v10 = v9 - 48;
      if ( !v9 )
        break;
      if ( v10 > 9 )
        return result;
    }
  }
  v11 = sub_93028(8u);
  v12 = *(_DWORD **)(a3 + 24);
  *v11 = 0;
  v11[1] = a2;
  if ( v12 )
  {
    while ( *v12 )
      v12 = (_DWORD *)*v12;
  }
  else
  {
    v12 = (_DWORD *)(a3 + 24);
  }
  *v12 = v11;
  return sub_9253C((int)sub_F13B0, (int)v11);
}
