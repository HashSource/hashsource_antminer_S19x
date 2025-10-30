char **__fastcall sub_1C42A8(char **a1, _BYTE *a2)
{
  _BYTE *v4; // [sp+Ch] [bp-4h] BYREF

  v4 = a2;
  sub_1C3F08(a1, &v4, 0, 0, 0, 0);
  if ( *v4 )
    sub_946E0("Junk after end of expression.");
  return a1;
}
