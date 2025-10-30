char *__fastcall sub_4A8C4(int *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  char *result; // r0
  int v7; // r12
  int v8; // lr
  int v9; // r4
  int v10; // r3
  __int64 v11; // r8
  int v12; // r0
  char s[84]; // [sp+8h] [bp-54h] BYREF

  v2 = sub_4501C(a1[1], a1[2], a1[3]);
  if ( a1[8] && a1[9] )
  {
    v12 = sub_1DDBBC(v2);
    v2 = ((int (__fastcall *)(int, int))loc_1DE518)(v12, a1[8]);
  }
  v3 = sub_1DDCF4(v2);
  v4 = sub_15D778(v3);
  v5 = sub_1DDBBC(v4);
  dword_4878F8 = sub_1DFB3C(v5);
  result = (char *)sub_1882B4();
  v7 = a1[10];
  if ( v7 )
  {
    v8 = a1[11];
    if ( v8 >= 0 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = v9;
        v11 = *(_QWORD *)(8 * v9 + v7);
        result = s;
        ++v9;
        if ( v11 != -1 )
        {
          snprintf(s, 0x50u, "(long) lseek (%d, %ld, %d)", v10, (_DWORD)v11, 0);
          result = (char *)sub_14CC00(s);
          v8 = a1[11];
        }
        if ( v8 < v9 )
          break;
        v7 = a1[10];
      }
    }
  }
  return result;
}
