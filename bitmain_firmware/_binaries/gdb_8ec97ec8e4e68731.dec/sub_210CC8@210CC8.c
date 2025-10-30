int __fastcall sub_210CC8(char *s2)
{
  _DWORD *v2; // r7
  unsigned int v3; // r5
  unsigned int v4; // r8
  unsigned int v5; // r4
  int result; // r0

  if ( !dword_489690 )
    sub_946E0("Overlay debugging not enabled.  Use either the 'overlay auto' or\nthe 'overlay manual' command.");
  if ( !s2 || !*s2 )
    sub_946E0("Argument required: name of an overlay section");
  v2 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v2 )
LABEL_12:
    sub_946E0("No overlay section called %s", s2);
LABEL_5:
  v3 = v2[43];
  v4 = v2[42];
  while ( 1 )
  {
    v5 = v4;
    if ( v4 < v3 )
      break;
LABEL_10:
    if ( v3 == v5 )
    {
      v2 = (_DWORD *)*v2;
      if ( !v2 )
        sub_946E0("No overlay section called %s", s2);
      goto LABEL_5;
    }
    v3 = v2[43];
    if ( v3 != v5 )
      goto LABEL_12;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)v5 )
    {
      result = strcmp(**(const char ***)v5, s2);
      if ( !result )
        break;
    }
    v5 += 12;
    if ( v5 >= v3 )
      goto LABEL_10;
  }
  if ( !*(_DWORD *)(v5 + 8) )
    sub_946E0("Section %s is not mapped", s2);
  *(_DWORD *)(v5 + 8) = 0;
  return result;
}
