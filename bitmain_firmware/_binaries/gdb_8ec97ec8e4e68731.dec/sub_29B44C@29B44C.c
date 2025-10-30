wchar_t __fastcall sub_29B44C(const char *a1, signed int a2)
{
  const char *v3; // r7
  size_t v5; // r0
  wchar_t pwc; // [sp+4h] [bp-10h] BYREF
  mbstate_t p; // [sp+8h] [bp-Ch] BYREF

  v3 = &a1[a2];
  if ( dword_48BB60 )
    return (unsigned __int8)a1[a2];
  v5 = strlen(a1);
  if ( (int)(v5 - 1) <= a2 )
    return (unsigned __int8)a1[a2];
  p.__count = 0;
  p.__wch = 0;
  if ( mbrtowc(&pwc, v3, v5 - a2, &p) - 1 > 0xFFFFFFFC )
    return (unsigned __int8)a1[a2];
  else
    return pwc;
}
