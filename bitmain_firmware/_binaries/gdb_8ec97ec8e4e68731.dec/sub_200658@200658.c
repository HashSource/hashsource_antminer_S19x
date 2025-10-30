void *__fastcall sub_200658(const char *a1, int *a2)
{
  char *v4; // r0
  int v5; // r1
  void *result; // r0
  bool v7; // zf
  int v8; // r2
  size_t v9; // r6
  _BYTE v10[4]; // [sp+0h] [bp-1Ch] BYREF
  int v11; // [sp+4h] [bp-18h] BYREF

  v4 = sub_15A10C((int)a1);
  if ( !a1 )
    return 0;
  if ( !*(_BYTE *)dword_487A40 )
    goto LABEL_5;
  v5 = *(unsigned __int8 *)a1;
  if ( v4 != "dos-based" )
  {
    if ( v5 == 47 )
      return sub_1FFD48((int)a1, a2, 0);
    goto LABEL_5;
  }
  v7 = v5 == 92;
  if ( v5 != 92 )
    v7 = v5 == 47;
  v8 = v7;
  if ( v7 )
  {
    v8 = 0;
  }
  else if ( !*a1 || a1[1] != 58 )
  {
LABEL_5:
    if ( !sub_203FA4(a1, &v11) )
      v11 = sub_327254(a1);
    if ( !a2 )
      return (void *)v11;
    result = (void *)v11;
    *a2 = -1;
    return result;
  }
  result = sub_1FFD48((int)a1, a2, v8);
  v11 = (int)result;
  if ( !result )
  {
    v9 = strlen(a1);
    memcpy(v10, a1, v9);
    strcpy(&v10[v9], ".exe");
    return sub_1FFD48((int)v10, a2, 0);
  }
  return result;
}
