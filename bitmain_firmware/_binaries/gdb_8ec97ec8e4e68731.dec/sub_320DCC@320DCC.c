void *__fastcall sub_320DCC(const char *a1)
{
  unsigned __int8 *v2; // r4
  _BYTE *v3; // r0
  __int64 v4; // r0
  void *ptr; // [sp+4h] [bp-1Ch] BYREF
  _BYTE *v7; // [sp+8h] [bp-18h]
  int v8; // [sp+Ch] [bp-14h]

  if ( !a1 || !*a1 )
    return 0;
  if ( strncmp(a1, "_D", 2u) )
    return 0;
  v8 = 0;
  v7 = 0;
  ptr = 0;
  if ( !strcmp(a1, "_Dmain") )
  {
    sub_31E858((int)&ptr, "D main");
    v3 = ptr;
  }
  else
  {
    v2 = sub_320BA0((int *)&ptr, (int)a1, 0);
    v3 = ptr;
    if ( !v2 && ptr )
    {
      free(ptr);
      return 0;
    }
  }
  if ( v7 == v3 || v7 - v3 <= 0 )
    return 0;
  LODWORD(v4) = &ptr;
  HIDWORD(v4) = 1;
  sub_31E7E8(v4);
  *v7 = 0;
  return ptr;
}
