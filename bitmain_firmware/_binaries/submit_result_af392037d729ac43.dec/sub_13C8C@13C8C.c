char *__fastcall sub_13C8C(char *a1, unsigned int a2, _DWORD *a3)
{
  char *v4; // r4
  int v6; // r8
  unsigned int v7; // r0
  unsigned int v8; // r5
  int v10; // [sp+4h] [bp-4h] BYREF

  v4 = a1;
  if ( !a2 )
    return v4;
  v6 = (unsigned __int8)*a1;
  v7 = sub_13BAC(v6);
  v8 = v7;
  if ( !v7 )
    return 0;
  if ( v7 != 1 )
  {
    if ( a2 >= v7 && sub_13BF4(v4, v7, &v10) )
      goto LABEL_7;
    return 0;
  }
  v10 = v6;
LABEL_7:
  if ( a3 )
    *a3 = v10;
  v4 += v8;
  return v4;
}
