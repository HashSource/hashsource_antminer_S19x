int __fastcall sub_2C095C(int result, int a2)
{
  int v2; // r12
  int v3; // lr
  _DWORD *v4; // r4
  int v5; // r3
  int v6; // r3
  int v7; // r7
  int *v8; // r10
  int v9; // r11
  bool v10; // zf
  _DWORD *v11; // r5
  int v12; // r2
  int v13; // r8
  int v14; // r1
  int v15; // r2
  int v16; // r9
  unsigned int v17; // r6
  int v18; // r10
  int v19; // r8
  unsigned int v20; // r9
  unsigned int *v21; // r3
  unsigned int v22; // r11
  _BOOL4 v23; // r3
  int v24; // r5
  int v25; // r6
  int v26; // r1
  bool v27; // zf
  int v28; // r3
  __int64 v29; // r0
  int v30; // r3
  unsigned int *v31; // r3
  int v32; // r3
  unsigned int v33; // r1
  int v35; // [sp+34h] [bp-58h]
  _DWORD *v36; // [sp+38h] [bp-54h]
  char *v37; // [sp+3Ch] [bp-50h]
  int v38; // [sp+40h] [bp-4Ch]
  int v39; // [sp+44h] [bp-48h]
  _BOOL4 v40; // [sp+48h] [bp-44h]
  int v41; // [sp+4Ch] [bp-40h]
  int v42; // [sp+54h] [bp-38h]
  int v43; // [sp+5Ch] [bp-30h] BYREF
  char *v44; // [sp+60h] [bp-2Ch] BYREF
  _DWORD v45[3]; // [sp+64h] [bp-28h]
  _DWORD v46[3]; // [sp+70h] [bp-1Ch] BYREF
  unsigned int v47[4]; // [sp+7Ch] [bp-10h] BYREF

  v2 = *(_DWORD *)(a2 + 28);
  v3 = *(_DWORD *)(v2 + 44);
  v45[2] = 0;
  memset(v46, 0, sizeof(v46));
  if ( v3 != 4 )
    result = 0;
  v45[0] = -1;
  v45[1] = -1;
  if ( v3 == 4 )
  {
    v4 = (_DWORD *)result;
    switch ( *(_DWORD *)(result + 36) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x15:
      case 0x16:
      case 0x17:
        v5 = 0;
        break;
      case 0x12:
      case 0x13:
      case 0x14:
        v5 = 1;
        break;
      default:
        sub_2A6BF0((int)"elf32-arm.c", 4616, (int)"arm_stub_required_alignment");
    }
    if ( *(_DWORD *)(v2 + 380) >> 31 == v5 )
    {
      v6 = *(_DWORD *)(result + 16);
      v7 = 0;
      v8 = *(int **)(result + 12);
      v9 = *(_DWORD *)(result + 48);
      v10 = v6 == -1;
      v11 = *(_DWORD **)(result + 44);
      v40 = v6 == -1;
      v12 = *(_DWORD *)(result + 24);
      if ( v6 == -1 )
        v6 = v8[9];
      v13 = v8[27];
      v14 = *(_DWORD *)(v12 + 60);
      v15 = *(_DWORD *)(v12 + 56);
      if ( v10 )
        *(_DWORD *)(result + 16) = v6;
      v16 = v8[37];
      v38 = v15;
      v36 = v11;
      v39 = *(_DWORD *)(v14 + 28);
      v37 = *(char **)(result + 20);
      if ( v9 <= 0 )
      {
        v17 = 0;
      }
      else
      {
        v41 = (int)v8;
        v17 = 0;
        v18 = v8[37];
        v19 = v13 + v6;
        v20 = 0;
        while ( 2 )
        {
          switch ( v11[1] )
          {
            case 1:
              v32 = *v11;
              if ( v11[3] )
              {
                if ( (*v11 & 0xFF00) != 0xD000 )
                {
                  v42 = *v11;
                  sub_2A6BBC("elf32-arm.c", 4749);
                  v32 = v42;
                }
                v32 |= (v4[8] >> 14) & 0xF00;
              }
              v33 = v19 + v17;
              v17 += 2;
              (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)(v18 + 4) + 60))(v32, v33);
              goto LABEL_18;
            case 2:
              (*(void (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)(v18 + 4) + 60))(
                *((unsigned __int16 *)v11 + 1),
                v19 + v17);
              (*(void (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)(v18 + 4) + 60))(
                *(unsigned __int16 *)v11,
                v19 + v17 + 2);
              if ( v11[2] )
                goto LABEL_45;
              goto LABEL_43;
            case 3:
              (*(void (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)(v18 + 4) + 48))(*v11, v19 + v17);
              if ( v11[2] != 29 )
                goto LABEL_43;
LABEL_45:
              v31 = &v47[v7++ + 3];
              *(v31 - 9) = v20;
              *(v31 - 6) = v17;
LABEL_43:
              v17 += 4;
              goto LABEL_18;
            case 4:
              (*(void (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)(v18 + 4) + 48))(*v11, v19 + v17);
              v21 = &v47[v7++ + 3];
              *(v21 - 6) = v17;
              v17 += 4;
              *(v21 - 9) = v20;
LABEL_18:
              ++v20;
              v11 += 4;
              if ( v9 != v20 )
                continue;
              v16 = v18;
              v8 = (int *)v41;
              break;
            default:
              sub_2A6BBC("elf32-arm.c", 4792);
              return 0;
          }
          break;
        }
      }
      if ( v40 )
        v8[9] += v17;
      if ( v4[10] != v17 )
        sub_2A6BBC("elf32-arm.c", 4802);
      v22 = (unsigned int)&v37[v38 + v39];
      if ( v4[14] == 1 )
        v22 |= 1u;
      if ( v17 || v4[9] != 17 )
      {
        v23 = v7 > 3;
        if ( !v7 )
          v23 = 1;
        if ( v23 )
          sub_2A6BBC("elf32-arm.c", 4812);
      }
      if ( v7 )
      {
        v24 = 0;
        v25 = a2;
        do
        {
          v26 = v4[9];
          v27 = v26 == 18;
          if ( v26 == 18 )
            v27 = v24 == 0;
          v29 = *(_QWORD *)&v36[4 * v45[v24] + 2];
          v28 = v4[4] + v46[v24];
          v47[2] = 0;
          HIDWORD(v29) += v22;
          v47[0] = v28;
          v30 = v4[6];
          v47[1] = (unsigned __int8)v29;
          if ( v27 )
            HIDWORD(v29) = *(_DWORD *)(v30 + 56) + v4[7] + *(_DWORD *)(*(_DWORD *)(v30 + 60) + 28);
          if ( (unsigned int)v29 > 0x87 )
          {
            v35 = v30;
            LODWORD(v29) = sub_2B5690(v29);
            v30 = v35;
          }
          else
          {
            LODWORD(v29) = &dword_41530C[13 * v29];
          }
          ++v24;
          sub_2BCB08(
            (char *)v29,
            v16,
            *(_DWORD *)(v25 + 48),
            v8,
            v8[27],
            v47,
            SHIDWORD(v29),
            v25,
            (char **)v30,
            "",
            2u,
            v4[14],
            v4[13],
            &v43,
            &v44);
        }
        while ( v24 != v7 );
      }
    }
    return 1;
  }
  return result;
}
