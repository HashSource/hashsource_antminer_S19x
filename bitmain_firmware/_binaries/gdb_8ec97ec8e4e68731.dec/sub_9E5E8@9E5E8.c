size_t __fastcall sub_9E5E8(const char *a1)
{
  int v2; // r0

  if ( !a1 )
    return 0;
  v2 = sub_338BD4(a1, "___");
  if ( v2 )
    return v2 - (_DWORD)a1;
  else
    return strlen(a1);
}
