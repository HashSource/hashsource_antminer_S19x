_DWORD *__fastcall sub_233F28(_DWORD *a1)
{
  char *v2; // r7
  char *v3; // r5
  int v4; // r6
  void *v5; // lr
  char *v6; // r5
  int v7; // r12
  int v8; // r2
  _DWORD *v9; // r3
  unsigned int v10; // r0
  unsigned int v11; // r1
  int v12; // r3
  int v14; // r3
  char *v15; // r6
  char *v16; // r0
  void *v17; // r0
  void *ptr; // [sp+4h] [bp-10h] BYREF
  char *v19; // [sp+8h] [bp-Ch]
  int v20; // [sp+Ch] [bp-8h]

  off_489B2C(&ptr);
  v2 = (char *)ptr;
  v3 = v19;
  if ( v19 == ptr )
  {
    v14 = v20;
    *a1 = v19;
    a1[1] = v3;
    a1[2] = v14;
    return a1;
  }
  else
  {
    v4 = v19 - (_BYTE *)ptr;
    sub_233BB0((int)ptr, v19, 2 * (31 - __clz(-858993459 * ((v19 - (_BYTE *)ptr) >> 3))));
    if ( v4 > 640 )
    {
      v15 = v2 + 640;
      sub_23451C(v2, v2 + 640, 0);
      if ( v3 != v2 + 640 )
      {
        do
        {
          v16 = v15;
          v15 += 40;
          sub_234484(v16, 0);
        }
        while ( v3 != v15 );
      }
    }
    else
    {
      sub_23451C(v2, v3, 0);
    }
    v5 = ptr;
    v6 = v19;
    v7 = -858993459 * ((v19 - (_BYTE *)ptr) >> 3);
    if ( v7 )
    {
      v8 = 0;
      v9 = ptr;
      *((_DWORD *)ptr + 2) = 0;
      while ( ++v8 != v7 )
      {
        v10 = v9[1];
        v11 = v9[10];
        v9[12] = v8;
        if ( v10 > v11 )
        {
          sub_946B0("Overlapping regions in memory map: ignoring");
          v17 = ptr;
          *a1 = 0;
          a1[1] = 0;
          a1[2] = 0;
          if ( !v17 )
            return a1;
          sub_339E64(v17);
          return a1;
        }
        v9 += 10;
      }
    }
    v12 = v20;
    *a1 = v5;
    a1[1] = v6;
    a1[2] = v12;
    return a1;
  }
}
