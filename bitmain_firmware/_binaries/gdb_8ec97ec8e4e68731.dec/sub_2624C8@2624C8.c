int __fastcall sub_2624C8(int *a1, int *a2, char *a3, _DWORD *a4, const char *a5)
{
  int v6; // r0
  _DWORD *v10; // r0
  int v11; // r0
  _DWORD *v12; // r8
  int v13; // r3
  int v14; // r0
  _DWORD *v15; // r0
  _BYTE *v16; // r3
  unsigned int v17; // r3
  int result; // r0
  int v19; // r3
  int v20; // r2
  __int16 *v21; // r3
  bool v22; // zf

  v6 = *a1;
LABEL_2:
  v6 = sub_26EAAC(v6);
  *a1 = v6;
  while ( 1 )
  {
    v10 = (_DWORD *)sub_26BC70(v6);
    v11 = sub_171258(v10);
    v12 = (_DWORD *)v11;
    v13 = **(char **)(v11 + 24);
    if ( v13 != 1 && (unsigned int)(unsigned __int8)v13 - 18 > 1 )
      break;
    v14 = sub_26210C(*a1);
    *a1 = v14;
    v15 = (_DWORD *)sub_26BC70(v14);
    v16 = *(_BYTE **)(sub_171258(v15) + 24);
    v6 = *a1;
    if ( *v16 != 7 )
      goto LABEL_2;
  }
  v17 = (unsigned __int8)v13 - 3;
  if ( v17 > 1 )
    sub_946E0("Attempt to extract a component of a value that is not a %s.", a5);
  if ( a4 )
  {
    v17 = 0;
    *a4 = 0;
  }
  if ( a2 )
  {
    result = sub_261978(a3, a1, a2, v17, 0, a4, (_DWORD *)v11);
    if ( result == -1 )
      sub_946E0("One of the arguments you tried to pass to %s could not be converted to what the function wants.", a3);
    if ( !result )
    {
      result = sub_2604DC(a3, *a1, v12, 0);
      v22 = result == 0;
      if ( result )
        v22 = a4 == 0;
      if ( !v22 )
      {
        *a4 = 1;
        return result;
      }
      if ( !result )
      {
        sub_92F64(2, "Structure has no component named %s.", a3);
        goto LABEL_28;
      }
    }
  }
  else
  {
    result = sub_2604DC(a3, *a1, (_DWORD *)v11, 0);
    if ( !result )
    {
      result = sub_261978(a3, a1, 0, v19, 0, a4, v12);
      if ( result == -1 )
        sub_946E0("Cannot take address of method %s.", a3);
      if ( !result )
      {
        v20 = v12[6];
        if ( (*(_WORD *)(v20 + 2) & 0x380) == 0x80 )
          v21 = *(__int16 **)(v20 + 28);
        else
          v21 = &word_3B4A2C;
        if ( v21[2] )
          sub_946E0("There is no member or method named %s.", a3);
LABEL_28:
        sub_946E0("There is no member named %s.", a3);
      }
    }
  }
  return result;
}
