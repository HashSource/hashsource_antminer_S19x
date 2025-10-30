void sub_D0450()
{
  _DWORD *i; // r4
  int v1; // r2
  int v2; // r5
  int v3; // r0
  int v4; // r5
  int v5; // r1
  int v6; // r3
  _BOOL4 v7; // r3
  _DWORD *v8; // r0
  int v9; // r3
  _DWORD *v10; // r10
  char *v11; // r1
  __int64 v12; // r0
  char v13[36]; // [sp-20h] [bp-64h] BYREF
  int v14; // [sp+4h] [bp-40h] BYREF
  int v15; // [sp+8h] [bp-3Ch] BYREF
  char *v16; // [sp+Ch] [bp-38h]

  for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
  {
    v8 = (_DWORD *)sub_CB2B4((int)i);
    v9 = *v8;
    v10 = v8;
    if ( *v8 != loc_D05D4 )
    {
      if ( !v9 )
      {
        sub_1B1FB8((int)&v15, "_ovly_debug_event");
        if ( !v15 )
        {
          *v10 = loc_D05D4;
          continue;
        }
        v11 = v16;
        v9 = v15;
        *v10 = v15;
        v10[1] = v11;
      }
      v1 = *(__int16 *)(v9 + 22);
      if ( v1 == -1 )
      {
        v12 = sub_94700((int)"breakpoint.c", 3244, "Section index is uninitialized");
        sub_D05D8(v12, HIDWORD(v12));
        return;
      }
      v2 = *(_DWORD *)(v9 + 8) + *(_DWORD *)(*(_DWORD *)(v10[1] + 144) + 4 * v1);
      v3 = sub_1B7250(i);
      v4 = sub_D03A0(v3, v2, 22, loc_D05D4 - 972);
      sub_19CC78(&v15);
      v16 = v13;
      strcpy(v13, "_ovly_debug_event");
      sub_19D0B8(&v14, &v15);
      v5 = *(_DWORD *)(v4 + 76);
      v6 = v14;
      v14 = 0;
      *(_DWORD *)(v4 + 76) = v6;
      if ( v5 )
      {
        ((void (__fastcall *)(int))loc_19D154)(v4 + 76);
        if ( v14 )
          ((void (__fastcall *)(int *))loc_19D154)(&v14);
      }
      v7 = dword_489690 == 2;
      *(_DWORD *)(v4 + 16) = v7;
      *(_DWORD *)(loc_D05D4 - 1312 + 0xC) = v7;
    }
  }
}
