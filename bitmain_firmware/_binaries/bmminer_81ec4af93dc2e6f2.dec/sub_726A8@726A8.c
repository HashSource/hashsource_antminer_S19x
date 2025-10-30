unsigned __int8 *__fastcall sub_726A8(unsigned __int8 *a1, unsigned int a2, _DWORD *a3)
{
  int v8; // [sp+10h] [bp-Ch] BYREF
  unsigned int v9; // [sp+14h] [bp-8h]

  if ( !a2 )
    return a1;
  v9 = sub_72418(*a1);
  if ( !v9 )
    return 0;
  if ( v9 == 1 )
  {
    v8 = *a1;
  }
  else if ( v9 > a2 || !sub_724FC((char *)a1, v9, &v8) )
  {
    return 0;
  }
  if ( a3 )
    *a3 = v8;
  return &a1[v9];
}
