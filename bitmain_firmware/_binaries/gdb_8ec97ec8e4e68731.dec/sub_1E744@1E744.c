int __fastcall sub_1E744(_DWORD *a1)
{
  unsigned int v1; // r4
  int v3; // r0
  int v4; // r0
  void *v5; // r0
  int v6; // r2
  int result; // r0
  void *v8; // r0
  int v9; // r2
  int v10; // r3
  unsigned int v11; // r1
  int v12; // r2
  int v13; // r2
  _DWORD *v14; // r3
  int v15; // r1
  const char *v16; // r0
  int v17; // r3
  int v18; // r3
  int v19; // r2
  _DWORD *v20; // r0
  int v21; // r12
  int v22; // r1
  _DWORD *v23; // r0
  _DWORD v24[2]; // [sp+0h] [bp-12Ch] BYREF
  _DWORD src[24]; // [sp+8h] [bp-124h] BYREF
  _DWORD v26[49]; // [sp+68h] [bp-C4h] BYREF

  v1 = a1[3];
  v24[0] = 0;
  v24[1] = 0;
  v3 = a1[1];
  if ( ((v1 >> 11) & 3) > 1 )
  {
    switch ( BYTE1(v1) & 0xF )
    {
      case 0:
        goto LABEL_19;
      case 1:
      case 3:
      case 6:
      case 9:
      case 0xB:
      case 0xF:
        v17 = a1[8];
        goto LABEL_22;
      case 2:
      case 0xA:
        src[0] = v1 & 7;
        a1[8] = 1;
        goto LABEL_4;
      case 4:
      case 5:
        v1 = (unsigned __int8)v1;
        ((void (__fastcall *)(int, int, _DWORD *))loc_1DF9FC)(v3, 13, v24);
        if ( (_BYTE)v1 )
        {
          v10 = 0;
          do
          {
            if ( (v1 & 1) != 0 )
              ++v10;
            v1 >>= 1;
          }
          while ( v1 );
          v11 = a1[3];
          v12 = v24[0];
          a1[7] = v10;
          v13 = v12 - 4 * (((v11 >> 8) & 1) + v10);
          if ( v10 )
          {
            v14 = &v26[2 * v10];
            do
            {
              *(v14 - 1) = v13;
              v13 += 4;
              *(v14 - 2) = 4;
              v14 -= 2;
            }
            while ( v26 != v14 );
          }
        }
        else
        {
          a1[7] = 0;
        }
LABEL_19:
        src[0] = 13;
        a1[8] = 1;
        goto LABEL_4;
      case 0xC:
      case 0xD:
        v1 = (unsigned __int8)v1;
        if ( (_BYTE)v1 )
        {
          v18 = 0;
          v19 = 0;
          do
          {
            v20 = &v26[v18 + 48];
            v21 = v18 + 2;
            v22 = v18 + 1;
            if ( (v1 & 1) != 0 )
            {
              ++v18;
              *(v20 - 72) = v19;
              v22 = v21;
            }
            v1 >>= 1;
            ++v19;
          }
          while ( v1 );
          v23 = &v26[v18 + 48];
          v17 = v18 + 2;
          *(v23 - 72) = 25;
          a1[8] = v17;
          src[v22] = 13;
LABEL_22:
          if ( !v17 )
            goto LABEL_6;
        }
        else
        {
          src[1] = 13;
          v17 = 2;
          a1[8] = 2;
          src[0] = 25;
        }
        v4 = 4 * v17;
        goto LABEL_5;
      case 0xE:
        v15 = a1[2];
        a1[8] = 2;
        v16 = (const char *)sub_25AC8C(*a1, v15);
        sub_259858("Process record does not support instruction 0x%0x at address %s.\n", v1, v16);
        return -1;
      default:
        return -1;
    }
  }
  src[0] = BYTE1(v1) & 7;
  a1[8] = 1;
LABEL_4:
  v4 = 4;
LABEL_5:
  v5 = (void *)sub_93028(v4);
  v6 = a1[8];
  a1[9] = v5;
  memcpy(v5, src, 4 * v6);
LABEL_6:
  result = a1[7];
  if ( result )
  {
    v8 = (void *)sub_93028(8 * result);
    v9 = a1[7];
    a1[10] = v8;
    memcpy(v8, v26, 8 * v9);
    return 0;
  }
  return result;
}
