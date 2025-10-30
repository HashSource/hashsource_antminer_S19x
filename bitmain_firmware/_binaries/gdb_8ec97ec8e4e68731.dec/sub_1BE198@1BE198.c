_DWORD *__fastcall sub_1BE198(_DWORD *a1, int a2)
{
  int v3; // r0
  void *v4; // r3
  _BYTE *v5; // r0
  void **v6; // r10
  _DWORD *v7; // r3
  _DWORD *v8; // r9
  _DWORD *v9; // r8
  _DWORD *v10; // r7
  _DWORD *v11; // r6
  _DWORD *v12; // r4
  _DWORD *v13; // r5
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  void *v17; // [sp+Ch] [bp-20h] BYREF
  void *ptr; // [sp+10h] [bp-1Ch]
  int v19; // [sp+14h] [bp-18h]
  _BYTE v20[16]; // [sp+18h] [bp-14h] BYREF

  v17 = 0;
  v19 = 0;
  v20[0] = 0;
  ptr = v20;
  v3 = sub_274C9C("osdata", "osdata.dtd", &off_3CA55C, a2, &v17);
  if ( v3 )
    v4 = 0;
  else
    v4 = v17;
  if ( !v3 )
    v17 = 0;
  v5 = ptr;
  *a1 = v4;
  if ( v5 != v20 )
    sub_339E64(v5);
  v6 = (void **)v17;
  if ( v17 )
  {
    v7 = (_DWORD *)*((_DWORD *)v17 + 6);
    v8 = (_DWORD *)*((_DWORD *)v17 + 7);
    if ( v7 != v8 )
    {
      v9 = v7 + 3;
      v10 = v7 + 3;
      while ( 1 )
      {
        v11 = (_DWORD *)v7[1];
        v12 = (_DWORD *)*(v10 - 3);
        if ( v12 != v11 )
        {
          v13 = v12 + 8;
          do
          {
            v14 = (_DWORD *)v12[6];
            if ( v14 != v13 )
              sub_339E64(v14);
            v15 = (_DWORD *)*(v13 - 8);
            if ( v15 != v12 + 2 )
              sub_339E64(v15);
            v12 += 12;
            v13 += 12;
          }
          while ( v11 != v12 );
          v11 = (_DWORD *)*(v10 - 3);
        }
        if ( v11 )
          sub_339E64(v11);
        v10 += 3;
        v7 = v9;
        if ( v8 == v9 )
          break;
        v9 += 3;
      }
      v8 = v6[6];
    }
    if ( v8 )
      sub_339E64(v8);
    if ( *v6 != v6 + 2 )
      sub_339E64(*v6);
    sub_33AC04(v6);
  }
  return a1;
}
