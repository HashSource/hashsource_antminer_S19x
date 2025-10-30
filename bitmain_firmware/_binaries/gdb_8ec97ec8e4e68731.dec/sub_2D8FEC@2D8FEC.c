int __fastcall sub_2D8FEC(int a1, int *a2)
{
  int v2; // r3
  int v5; // r3
  int v7; // r0
  int v8; // r2
  int (__fastcall *v9)(int); // r3
  int v10; // r0
  int v11; // r1
  int v12; // r4
  _DWORD *v13; // r6
  int v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r0

  v2 = a2[2];
  switch ( v2 )
  {
    case 10:
      if ( (unsigned int)a2[1] > 0x67 )
      {
        v7 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(a2[4] + 8);
        v8 = a2[4];
        v9 = *(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76);
        **(_DWORD **)(*(_DWORD *)(a1 + 160) + 2344) = v7;
        v10 = v9(v8 + 32);
        v11 = a2[4];
        v12 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344);
        *(_DWORD *)(v12 + 4) = v10;
        *(_DWORD *)(v12 + 16) = sub_2D8F98(a1, (void *)(v11 + 72), 0x1Fu);
        return 1;
      }
      break;
    case 20:
      return sub_2D8D10(a1, ".reg", a2[1], a2[5], (unsigned int)a2[5]);
    case 21:
      return sub_2D8D10(a1, ".reg2", a2[1], a2[5], (unsigned int)a2[5]);
    case 22:
      return sub_2D8D10(a1, ".reg-xfp", a2[1], a2[5], (unsigned int)a2[5]);
    case 11:
      v13 = (_DWORD *)sub_2ADB48(a1, ".auxv", (const char *)0x100);
      if ( v13 )
        goto LABEL_18;
      break;
    case 23:
      v14 = sub_2ADB48(a1, ".wcookie", (const char *)0x100);
      v13 = (_DWORD *)v14;
      if ( v14 )
      {
LABEL_18:
        v15 = a2[1];
        v16 = a2[5];
        v13[21] = 0;
        v13[9] = v15;
        v13[20] = v16;
        v17 = sub_2A789C(a1);
        v5 = 1;
        v13[16] = v17 / 32 + 1;
        return v5;
      }
      break;
    default:
      return 1;
  }
  return 0;
}
