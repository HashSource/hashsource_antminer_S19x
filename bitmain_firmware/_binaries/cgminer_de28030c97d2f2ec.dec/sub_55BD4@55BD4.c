_BYTE *__fastcall sub_55BD4(_DWORD *a1)
{
  size_t v3; // [sp+8h] [bp-Ch] BYREF
  _BYTE *i; // [sp+Ch] [bp-8h]

  v3 = 0;
  for ( i = (_BYTE *)sub_558E4(a1, &v3); i && *i == 45; i = (_BYTE *)sub_559B8((int)i, a1, &v3) )
    ;
  return i;
}
