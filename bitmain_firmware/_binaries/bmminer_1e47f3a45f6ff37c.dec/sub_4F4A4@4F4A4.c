int __fastcall sub_4F4A4(int a1)
{
  _DWORD *v2; // r6
  _DWORD *v4; // r0
  _DWORD *v5; // r8
  char v6[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v6, "[DEBUG] freq tuning fine init.\n");
    sub_3B6AC(4, v6, 0, *(int *)"t.\n");
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(v6, "[DEBUG] Allocate memory for pm grade.\n");
      sub_3B6AC(4, v6, 0, *(unsigned __int16 *)"");
    }
  }
  v2 = (_DWORD *)dword_535D9C;
  if ( dword_535D9C )
    goto LABEL_3;
  v4 = malloc(0x3044u);
  v5 = v4;
  dword_535D9C = (int)v4;
  if ( v4 )
  {
    memset(v4, 0, 0x3044u);
    v2 = v5;
LABEL_3:
    *v2 = a1;
    sub_4EE8C();
    return 0;
  }
  sub_481F0(13, 255);
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v6, "Fail to allocate memory for pm grade context.\n");
    sub_3B6AC(3, v6, 0, *(int *)".\n");
  }
  return -1;
}
