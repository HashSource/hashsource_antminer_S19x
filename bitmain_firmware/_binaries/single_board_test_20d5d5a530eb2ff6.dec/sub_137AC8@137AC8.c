int __fastcall sub_137AC8(_DWORD *a1, int a2, int a3)
{
  int v3; // r5
  int *v4; // r2
  int v5; // r1
  _DWORD v7[4]; // [sp+8h] [bp-14h] BYREF

  if ( *a1 == 2 )
  {
    v3 = a1[1];
    v7[0] = a3;
    v4 = *(int **)(v3 + 4);
    v7[2] = a2;
    v7[1] = 4;
    v5 = *v4;
    v7[3] = 0;
    return sub_1280A0((int)v7, v5);
  }
  else
  {
    sub_D0048(46, 138, 123, (int)"crypto/cms/cms_env.c", 448);
    return -2;
  }
}
