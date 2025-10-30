int __fastcall sub_23136C(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // r4
  int result; // r0
  void *v8; // r11
  size_t v9; // r5
  int v10; // r3
  void *v11; // r6
  int v12; // r0
  unsigned int v13; // [sp+10h] [bp-4h] BYREF
  int v14[2]; // [sp+14h] [bp+0h] BYREF

  v4 = 0;
  result = sub_22DBF4(a1, a2, 0, 448, 0, v14);
  v13 = result;
  if ( result != -1 )
  {
    v8 = sub_9253C((int)&loc_231660, (int)&v13);
    v9 = 4096;
    v11 = sub_93028(0x1000u);
    while ( 1 )
    {
      v12 = sub_231258(v13, (int)v11 + v4, v9 - v4 - a4, v10, v4, 0, v14);
      if ( v12 >> 31 == -1 )
      {
        sub_92620(v8);
        free(v11);
        return -1;
      }
      if ( !v12 )
        break;
      v4 += v12;
      if ( v9 < 2 * v4 )
      {
        v9 *= 2;
        v12 = (int)sub_93050(v11, v9);
        v11 = (void *)v12;
      }
      sub_258BD4(v12);
    }
    sub_92620(v8);
    if ( v4 )
      *a3 = v11;
    else
      free(v11);
    return v4;
  }
  return result;
}
