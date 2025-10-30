int __fastcall sub_30120C(_DWORD *a1, int a2, unsigned int a3, _BYTE *a4)
{
  unsigned int v5; // r6
  int v8; // r8
  int v9; // r10
  int v10; // r5
  int v11; // r11
  int v12; // r2
  int v13; // r3
  int v14; // r0
  char v15; // r0
  int v16; // r2
  unsigned int v17; // r1
  unsigned int v18; // r0
  unsigned int v19; // lr
  int result; // r0
  unsigned int v21; // r1
  int v22; // [sp+0h] [bp-14h]
  int v23; // [sp+0h] [bp-14h]
  int v24; // [sp+0h] [bp-14h]
  unsigned int v25; // [sp+4h] [bp-10h]
  unsigned int v26; // [sp+8h] [bp-Ch]
  int v27; // [sp+Ch] [bp-8h]

  v5 = a3;
  v8 = a1[1];
  v9 = a1[5];
  if ( (int)a1[2] < 0 )
    v5 = -a3;
  v10 = sub_300850((int)a1);
  switch ( v10 )
  {
    case 0:
      return 2;
    case 1:
      v11 = (unsigned __int8)*a4;
      goto LABEL_5;
    case 2:
      v11 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(a2 + 4) + 52))(a4);
      if ( a1[6] )
        goto LABEL_9;
      goto LABEL_6;
    case 4:
      v11 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(a2 + 4) + 40))(a4);
LABEL_5:
      if ( !a1[6] )
      {
LABEL_6:
        v12 = 2;
        v13 = a1[10] & v11;
        goto LABEL_7;
      }
LABEL_9:
      v25 = (2 * ((1 << (a1[3] - 1)) - 1)) | 1;
      v15 = sub_2A67A4(a2);
      v16 = a1[6];
      v27 = a1[10];
      v22 = ~v25;
      v17 = (v25 << v8) | 1 | (2 * ((1 << (v15 - 1)) - 1));
      v13 = v27 & v11;
      v18 = (v5 & v17) >> v8;
      v19 = (v27 & v11 & v17) >> v9;
      v26 = v17 >> v8;
      switch ( v16 )
      {
        case 2:
          v22 = ~(v25 >> 1);
          break;
        case 3:
          if ( (((v18 + v19) & v26 | v18 | v19) & v22) != 0 )
            v12 = 3;
          else
            v12 = 2;
          goto LABEL_7;
        case 1:
          break;
        default:
          sub_2A6BF0((int)"reloc.c", 1564, (int)"_bfd_relocate_contents");
      }
      if ( (v22 & v18) != 0 )
      {
        if ( (v22 & v26) == (v22 & v18) )
          v12 = 2;
        else
          v12 = 3;
      }
      else
      {
        v12 = 2;
      }
      v21 = (v19 ^ ((v27 & ((unsigned int)~v27 >> 1)) >> v9)) - ((v27 & ((unsigned int)~v27 >> 1)) >> v9);
      if ( ((v18 ^ (v18 + v21)) & ~(v21 ^ v18) & v26 & v22) != 0 )
        v12 = 3;
LABEL_7:
      v14 = ((v13 + (v5 >> v8 << v9)) ^ v11) & a1[11] ^ v11;
      switch ( v10 )
      {
        case 1:
          *a4 = v14;
          result = v12;
          break;
        case 2:
          v24 = v12;
          (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)(a2 + 4) + 60))(v14, a4);
          result = v24;
          break;
        case 4:
          v23 = v12;
          (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)(a2 + 4) + 48))(v14, a4);
          result = v23;
          break;
        case 8:
          sub_2A6BF0((int)"reloc.c", 1594, (int)"_bfd_relocate_contents");
        default:
          sub_2A6BF0((int)"reloc.c", 1580, (int)"_bfd_relocate_contents");
      }
      return result;
    case 8:
      sub_2A6BF0((int)"reloc.c", 1468, (int)"_bfd_relocate_contents");
    default:
      sub_2A6BF0((int)"reloc.c", 1452, (int)"_bfd_relocate_contents");
  }
}
