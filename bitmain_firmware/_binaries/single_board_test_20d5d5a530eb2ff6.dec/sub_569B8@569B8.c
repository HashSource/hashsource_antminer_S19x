char *__fastcall sub_569B8(_WORD *a1, int a2, _BYTE *a3, signed int *a4, int a5, int a6)
{
  unsigned int *v10; // r0
  unsigned int *v11; // r8
  __int16 v12; // r12

  if ( !a1 )
    return 0;
  if ( (_DWORD)a1 << 30 )
    return 0;
  v10 = (unsigned int *)sub_52D48(a1);
  v11 = v10;
  if ( !v10 )
    return 0;
  sub_50B68(v10, a2);
  if ( a6 > 0 )
  {
    if ( a6 > 12 )
      v12 = 12;
    else
      v12 = a6;
  }
  else
  {
    v12 = 9;
  }
  *((_WORD *)v11 + 131084) = v12;
  return sub_548C0(v11, a2, a3, a4, a5, a6, 2);
}
