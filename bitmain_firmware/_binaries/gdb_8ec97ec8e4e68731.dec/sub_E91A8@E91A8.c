int __fastcall sub_E91A8(int a1, const char *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // r6
  int v11; // r0
  int result; // r0
  char *v13; // r0
  char *v14; // r2
  int v15; // r3
  bool v16; // zf

  if ( a4 > 0 )
    v10 = sub_171258(a1);
  else
    v10 = a1;
  v11 = sub_255BB8(a6, v10);
  if ( !v11 )
  {
    ((void (__fastcall *)(int, int, int, int, int, int))loc_E958C)(v10, a3, a4, a5, a6, a7);
    if ( a2 && *a2 )
      goto LABEL_12;
    v14 = *(char **)(v10 + 24);
    if ( a4 > 0 || !*((_DWORD *)v14 + 2) )
    {
      v15 = *v14;
      v16 = v15 == 1;
      if ( v15 != 1 )
        v16 = (v15 & 0xFFFFFFF7) == 7;
      if ( v16 )
        goto LABEL_12;
      if ( v15 == 2 )
      {
        if ( (v14[2] & 1) != 0 )
          goto LABEL_13;
      }
      else if ( (unsigned int)(v15 - 16) > 1 && (unsigned __int8)(v15 - 18) > 1u )
      {
        goto LABEL_13;
      }
LABEL_12:
      sub_25A6BC(&word_3E1F84, a3);
    }
LABEL_13:
    if ( !a2 )
      return sub_EB904(v10, a3, a4, 0, 0, a6, a7);
    if ( *a2 )
      sub_EB904(v10, a3, a4, 0, 1, a6, a7);
    else
      sub_EB904(v10, a3, a4, *(unsigned __int8 *)a2, *(unsigned __int8 *)a2, a6, a7);
    sub_25A6BC(a2, a3);
    v13 = strchr(a2, 40);
    return sub_E8ED0(v10, a3, a4, 0, v13 != 0, a6);
  }
  result = sub_25A6BC(v11, a3);
  if ( a2 )
  {
    if ( *a2 )
      sub_25A6BC(&word_3E1F84, a3);
    return sub_25A6BC(a2, a3);
  }
  return result;
}
