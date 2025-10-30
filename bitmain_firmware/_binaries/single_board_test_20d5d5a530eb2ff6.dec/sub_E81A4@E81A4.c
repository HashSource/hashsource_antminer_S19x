int __fastcall sub_E81A4(int a1, char *a2, unsigned int a3)
{
  unsigned int v4; // r0
  __int64 v5; // r2
  char *v6; // r11
  unsigned int v7; // r4
  unsigned __int64 v8; // r2
  int result; // r0
  unsigned int v10; // r9
  char *v11; // r12
  __int64 v12; // r2
  __int64 v13; // r4
  unsigned int v14; // kr00_4
  __int64 v15; // r6
  __int64 v16; // r8
  __int64 v17; // r4
  unsigned int v18; // t1
  __int64 v19; // r2
  __int64 v20; // r4
  __int64 v21; // r8
  __int64 v22; // r4
  __int64 v23; // r6
  __int64 v24; // r4
  __int64 v25; // r6
  __int64 v26; // r4
  __int64 v27; // r6
  void *v28; // r0
  void (__fastcall *v29)(void *, void *, _DWORD); // r3
  __int64 v30; // r2
  unsigned __int64 v31; // [sp+0h] [bp-34h]
  __int64 v32; // [sp+0h] [bp-34h]
  char *src; // [sp+Ch] [bp-28h]
  unsigned __int64 v34; // [sp+10h] [bp-24h]
  char v35; // [sp+1Ch] [bp-18h]
  unsigned __int64 dest; // [sp+20h] [bp-14h] BYREF
  __int64 v37; // [sp+28h] [bp-Ch]
  _BYTE v38[4]; // [sp+30h] [bp-4h] BYREF

  v4 = a3 >> 4;
  v35 = a3;
  v5 = *(_QWORD *)(a1 + 72);
  src = a2;
  v34 = v5 + v4;
  if ( v34 < v5 + 1 )
  {
LABEL_9:
    if ( (v35 & 0xF) != 0 )
    {
      v22 = *(_QWORD *)(a1 + 88);
      v23 = *(_QWORD *)(a1 + 32);
      HIDWORD(dest) = 0;
      v24 = v22 ^ v23;
      v25 = *(_QWORD *)(a1 + 96);
      v32 = v24;
      *(_QWORD *)(a1 + 88) = v24;
      v26 = *(_QWORD *)(a1 + 40);
      LODWORD(dest) = 0;
      LODWORD(v37) = 0;
      v27 = v25 ^ v26;
      *(_QWORD *)(a1 + 96) = v27;
      HIDWORD(v37) = 0;
      v28 = memcpy(&dest, src, v35 & 0xF);
      v38[(v35 & 0xF) - 16] = 0x80;
      v29 = *(void (__fastcall **)(void *, void *, _DWORD))a1;
      dest ^= v32;
      v37 ^= v27;
      v29(v28, v28, *(_DWORD *)(a1 + 8));
      v30 = *(_QWORD *)(a1 + 112) ^ v37;
      *(_QWORD *)(a1 + 104) ^= dest;
      *(_QWORD *)(a1 + 112) = v30;
    }
    *(_QWORD *)(a1 + 72) = v34;
    return 1;
  }
  else
  {
    v6 = a2 + 16;
    v31 = v5 + 1;
    while ( 1 )
    {
      if ( (v31 & 1) != 0 )
      {
        v7 = 0;
      }
      else
      {
        v8 = v31;
        v7 = 0;
        do
        {
          v8 >>= 1;
          ++v7;
        }
        while ( (v8 & 1) == 0 );
      }
      result = (int)sub_E778C((_DWORD *)a1, v7);
      if ( !result )
        break;
      v10 = HIDWORD(v31);
      v11 = v6;
      v12 = *(_QWORD *)result;
      v13 = *(_QWORD *)(a1 + 88);
      v14 = v31;
      __pld(v6 + 32);
      v15 = *(_QWORD *)(a1 + 96);
      v31 = __PAIR64__(v10, v14) + 1;
      v16 = v13 ^ v12;
      src = v6;
      *(_QWORD *)(a1 + 88) = v13 ^ v12;
      v6 += 16;
      v17 = v15 ^ *(_QWORD *)(result + 8);
      *(_QWORD *)(a1 + 96) = v17;
      v18 = *((_DWORD *)v11 - 4);
      v11 -= 16;
      v19 = *((_QWORD *)v11 + 1);
      dest = __PAIR64__(*((_DWORD *)v11 + 1), v18);
      v37 = v19;
      dest ^= v16;
      LODWORD(v19) = *(_DWORD *)(a1 + 8);
      HIDWORD(v19) = *(_DWORD *)a1;
      v37 ^= v17;
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, _DWORD))HIDWORD(v19))(&dest, &dest, v19);
      v20 = *(_QWORD *)(a1 + 112);
      v21 = v37;
      *(_QWORD *)(a1 + 104) ^= dest;
      *(_QWORD *)(a1 + 112) = v20 ^ v21;
      if ( v34 < v31 )
        goto LABEL_9;
    }
  }
  return result;
}
