void __fastcall sub_DCCD4(int a1, int a2)
{
  void *v3; // r2
  int v4; // r0
  int v5; // r4
  bool v6; // zf
  int v7; // r3
  int v8; // r6
  int v9; // r5
  int v10; // r8
  bool v11; // zf
  _DWORD *v12; // r3
  int *v13; // r4
  int v14; // r3
  int v15; // r1
  int v16; // r2
  _BYTE *v17; // r3
  int v18; // r2
  int v19; // r3
  _DWORD *v20; // r4
  void *v21; // [sp+4h] [bp-58h]
  int v22[2]; // [sp+Ch] [bp-50h] BYREF
  int v23; // [sp+14h] [bp-48h]
  int v24; // [sp+18h] [bp-44h] BYREF
  int v25; // [sp+1Ch] [bp-40h]
  int v26[2]; // [sp+20h] [bp-3Ch] BYREF
  void *v27; // [sp+28h] [bp-34h] BYREF
  int (*v28)(); // [sp+2Ch] [bp-30h]
  _DWORD v29[4]; // [sp+30h] [bp-2Ch] BYREF
  void *ptr; // [sp+40h] [bp-1Ch] BYREF
  int (*v31)(); // [sp+44h] [bp-18h]
  _DWORD v32[5]; // [sp+48h] [bp-14h] BYREF

  v22[0] = a1;
  if ( a1 )
  {
    sub_5B05C((int *)&v27, v22);
    if ( v28 )
    {
      v3 = sub_DC818;
      if ( !a2 )
        v3 = sub_DC648;
      v21 = v3;
      while ( 1 )
      {
        v4 = sub_33C6C4(&v27, 46, 0);
        if ( v4 == -1 )
          break;
        v5 = v4 + 1;
        v6 = v4 == 0;
        if ( v4 )
          v6 = v28 == (int (*)())v5;
        v7 = v6;
        if ( v6 )
          sub_946E0("Bad breakpoint number at or near: '%s'", (const char *)v27);
        v8 = sub_C8F0C(v7, (unsigned __int8 *)v27, 46, (unsigned __int8 *)v7);
        v23 = v8;
        sub_C8F94(&v24, 1, &v27, v5);
        v9 = v24;
        v10 = v25;
        v11 = v24 == 0;
        if ( !v24 )
          v11 = v25 == 0;
        if ( v11 )
          goto LABEL_46;
        if ( v24 <= v25 )
        {
          while ( 1 )
          {
            v12 = (_DWORD *)dword_478348;
            if ( !dword_478348 )
LABEL_60:
              sub_946E0("Bad breakpoint number '%d'", v8);
            while ( v8 != v12[6] )
            {
              v12 = (_DWORD *)v12[2];
              if ( !v12 )
                goto LABEL_60;
            }
            if ( !v9 )
              sub_946E0("Bad breakpoint location number '%d'", 0);
            v13 = (int *)v12[7];
            if ( !v13 )
              goto LABEL_59;
            if ( v9 != 1 )
              break;
LABEL_27:
            if ( *((unsigned __int8 *)v13 + 38) != a2 )
            {
              *((_BYTE *)v13 + 38) = a2;
              sub_CA320((int)(v13 + 4), v13 + 7);
            }
            if ( off_489B54(&dword_4899A0) )
            {
              if ( *(_DWORD *)(sub_249744() + 8) )
              {
                v19 = v13[4];
                if ( v19 )
                {
                  if ( (unsigned int)(*(_DWORD *)(v19 + 12) - 27) <= 2 )
                    off_489BA8(&dword_4899A0, v13);
                }
              }
            }
            sub_D72EC(0, v15, v16);
            if ( ++v9 > v10 )
              goto LABEL_31;
          }
          v14 = 1;
          while ( 1 )
          {
            v13 = (int *)*v13;
            if ( !v13 )
              break;
            if ( ++v14 == v9 )
              goto LABEL_27;
          }
LABEL_59:
          sub_946E0("Bad breakpoint location number '%d'", v9);
        }
LABEL_31:
        sub_5B05C((int *)&ptr, v22);
        v17 = v27;
        if ( ptr == v32 )
        {
          sub_33B48C(&v27, &ptr);
          v17 = ptr;
          goto LABEL_35;
        }
        if ( v27 == v29 )
        {
          v27 = ptr;
          v28 = v31;
          v29[0] = v32[0];
LABEL_48:
          ptr = v32;
          v17 = v32;
          goto LABEL_35;
        }
        v27 = ptr;
        v28 = v31;
        v18 = v29[0];
        v29[0] = v32[0];
        if ( !v17 )
          goto LABEL_48;
        ptr = v17;
        v32[0] = v18;
LABEL_35:
        v31 = 0;
        *v17 = 0;
        if ( ptr != v32 )
          sub_339E64(ptr);
        if ( !v28 )
          goto LABEL_38;
      }
      sub_C8F94(v26, 0, &v27, 0);
      v8 = v26[0];
      v23 = v26[1];
LABEL_46:
      v22[1] = v8;
      ptr = v21;
      v31 = sub_DF5E0;
      sub_CAAD8(v8, v23, (int)v21, (int (__fastcall *)(int, int, int))sub_DF5E0);
      goto LABEL_31;
    }
LABEL_38:
    if ( v27 != v29 )
      sub_339E64(v27);
  }
  else
  {
    v20 = (_DWORD *)dword_478348;
    if ( dword_478348 )
    {
      do
      {
        if ( (int)v20[6] > 0 )
        {
          if ( a2 )
          {
            sub_DC658(v20, v20[5], 0);
          }
          else if ( v20[3] != 17 )
          {
            sub_DC5AC(v20);
          }
        }
        v20 = (_DWORD *)v20[2];
      }
      while ( v20 );
    }
  }
}
