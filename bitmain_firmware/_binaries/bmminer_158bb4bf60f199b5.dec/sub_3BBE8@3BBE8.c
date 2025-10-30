int __fastcall sub_3BBE8(int a1)
{
  _DWORD *v2; // r6
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v4, "[DEBUG] PM grade init.\n");
    sub_47AB4(4, v4, 0);
    if ( (unsigned int)dword_9E31C > 4 )
    {
      strcpy(v4, "[DEBUG] Allocate memory for pm grade.\n");
      sub_47AB4(4, v4, 0);
    }
  }
  v2 = (_DWORD *)dword_1AEA80;
  if ( dword_1AEA80 || (v2 = calloc(0x2804u, 1u), (dword_1AEA80 = (int)v2) != 0) )
  {
    *v2 = a1;
    sub_3B674();
    return 0;
  }
  else
  {
    sub_31794(13, 255);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v4, "Fail to allocate memory for pm grade context.\n");
      sub_47AB4(3, v4, 0);
    }
    return -1;
  }
}
