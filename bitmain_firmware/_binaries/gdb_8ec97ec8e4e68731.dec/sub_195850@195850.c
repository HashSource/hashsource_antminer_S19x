int __fastcall sub_195850(_DWORD *s, int a2, int a3)
{
  int v5; // r3
  int v6; // r5
  int v7; // r0
  int v8; // r2
  __int64 v9; // r0
  int v10; // r2
  int v11; // r2
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  _DWORD v25[10]; // [sp+0h] [bp-28h] BYREF

  v5 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a3 + 32) >> 3));
  if ( v5 == 10 )
  {
    sub_21EC18(v25, a3, a2);
    v18 = v25[1];
    v19 = v25[2];
    v20 = v25[3];
    *s = v25[0];
    s[1] = v18;
    s[2] = v19;
    s[3] = v20;
    v21 = v25[5];
    v22 = v25[6];
    v23 = v25[7];
    s[4] = v25[4];
    s[5] = v21;
    s[6] = v22;
    s[7] = v23;
    v24 = v25[9];
    s[8] = v25[8];
    s[9] = v24;
    return 1;
  }
  else
  {
    if ( v5 == 9 && *(_DWORD *)(a3 + 8) )
    {
      memset(s, 0, 0x28u);
      v7 = sub_2209DC(a3);
      v8 = *(_DWORD *)(v7 + 4);
      HIDWORD(v9) = *(_DWORD *)(a3 + 8);
      v6 = 1;
      s[1] = v7;
      v10 = *(_DWORD *)(v8 + 4);
      LODWORD(v9) = *(unsigned __int16 *)(a3 + 34);
      s[2] = a3;
      v11 = *(_DWORD *)(v10 + 16);
      *((_QWORD *)s + 2) = v9;
      *((_BYTE *)s + 28) = 1;
      *s = v11;
    }
    else if ( a2 )
    {
      return 0;
    }
    else
    {
      if ( *(_WORD *)(a3 + 34) )
      {
        memset(s, 0, 0x28u);
        v12 = sub_2209DC(a3);
        v13 = *(unsigned __int16 *)(a3 + 34);
        v14 = *(_DWORD *)(a3 + 8);
        v15 = *(_DWORD *)(*(_DWORD *)(v12 + 4) + 4);
        s[1] = v12;
        s[2] = a3;
        v17 = *(_DWORD *)(v15 + 16);
        s[4] = v13;
        s[5] = v14;
        *s = v17;
        return 1;
      }
      return 0;
    }
    return v6;
  }
}
