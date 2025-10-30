int __fastcall sub_4D498(int a1)
{
  _DWORD *v2; // r6
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v4, "[DEBUG] freq tuning fine init.\n");
    sub_3AF5C(4, v4, 0, *(int *)"t.\n");
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(v4, "[DEBUG] Allocate memory for pm grade.\n");
      sub_3AF5C(4, v4, 0, *(unsigned __int16 *)"");
    }
  }
  v2 = (_DWORD *)dword_530F10;
  if ( dword_530F10 || (v2 = calloc(0x3044u, 1u), (dword_530F10 = (int)v2) != 0) )
  {
    *v2 = a1;
    sub_4CE9C();
    return 0;
  }
  else
  {
    sub_46318(13, 255);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v4, "Fail to allocate memory for pm grade context.\n");
      sub_3AF5C(3, v4, 0, *(int *)".\n");
    }
    return -1;
  }
}
