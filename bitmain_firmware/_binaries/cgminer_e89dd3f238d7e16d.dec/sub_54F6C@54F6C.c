_BYTE *__fastcall sub_54F6C(_DWORD *a1)
{
  size_t v3; // [sp+8h] [bp-Ch] BYREF
  _BYTE *i; // [sp+Ch] [bp-8h]

  v3 = 0;
  for ( i = (_BYTE *)sub_54C6C(a1, &v3); i && *i == 45; i = (_BYTE *)sub_54D48((int)i, a1, &v3) )
    ;
  return i;
}
