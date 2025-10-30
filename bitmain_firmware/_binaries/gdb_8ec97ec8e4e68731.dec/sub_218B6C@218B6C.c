int __fastcall sub_218B6C(int result)
{
  _DWORD *v1; // r8
  _DWORD *i; // r4
  const char *v3; // r0
  int v4; // r0

  v1 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      for ( i = (_DWORD *)v1[9]; i; i = (_DWORD *)*i )
      {
        sub_258BD4(result);
        v3 = (const char *)sub_1B87A8((int)i);
        sub_259F10("Byte cache statistics for '%s':\n", v3);
        v4 = sub_1D057C(i[23]);
        ((void (__fastcall *)(int, const char *))loc_C19C8)(v4, "partial symbol cache");
        ((void (__fastcall *)(_DWORD, const char *))loc_C19C8)(*(_DWORD *)(i[10] + 48), "preprocessor macro cache");
        result = ((int (__fastcall *)(_DWORD, const char *))loc_C19C8)(*(_DWORD *)(i[10] + 44), "file name cache");
      }
      v1 = (_DWORD *)*v1;
    }
    while ( v1 );
  }
  return result;
}
