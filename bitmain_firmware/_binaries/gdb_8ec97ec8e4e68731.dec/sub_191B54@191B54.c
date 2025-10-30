const char *__fastcall sub_191B54(const char *s2, int a2)
{
  __int64 v2; // r4
  const char *v3; // r6
  int v4; // r3
  int v5; // [sp+0h] [bp-Ch] BYREF
  int v6; // [sp+4h] [bp-8h] BYREF

  v2 = *(_QWORD *)&dword_4879C4;
  v6 = (int)s2;
  v5 = a2;
  if ( dword_4879C4 != dword_4879C8 )
  {
    v3 = s2;
    do
    {
      s2 = (const char *)strcmp(*(const char **)v2, v3);
      if ( !s2 )
      {
        sub_94700((int)"interps.c", 117, "interpreter factory already registered: \"%s\"\n", v3);
        JUMPOUT(0x191C04);
      }
      LODWORD(v2) = v2 + 8;
    }
    while ( HIDWORD(v2) != (_DWORD)v2 );
  }
  if ( HIDWORD(v2) == dword_4879CC )
    return (const char *)sub_191C28(&dword_4879C4, HIDWORD(v2), &v6, &v5);
  if ( HIDWORD(v2) )
  {
    v4 = v6;
    *(_DWORD *)(HIDWORD(v2) + 4) = v5;
    *(_DWORD *)HIDWORD(v2) = v4;
  }
  dword_4879C8 = HIDWORD(v2) + 8;
  return s2;
}
