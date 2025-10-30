int __fastcall sub_B3550(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *src, int a8, int a9, int a10, int a11)
{
  int v12; // r8
  int v13; // r4
  int v15; // r6
  int v16; // r0
  size_t v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r3
  int v21; // r8
  int v22; // r10
  unsigned int v23; // r12
  int v24; // lr
  int v25; // r12
  int v26; // r2
  int v27; // r3
  int v28; // r3
  int v29; // r9
  int v30; // r3
  int v31; // r6
  __int64 v32; // r0
  int v33; // r0
  void *v35; // r0
  void *v36; // r3
  int v37; // r1
  int v38; // lr
  int v39; // r0
  int v40; // r2
  int v41; // r9
  int v42; // r0
  _DWORD *v43; // r2
  int v44; // r2
  int v45; // r3
  int v46; // [sp+24h] [bp-78h]
  int v48; // [sp+2Ch] [bp-70h]
  int v49; // [sp+38h] [bp-64h]
  __int64 v51; // [sp+40h] [bp-5Ch]
  _DWORD dest[20]; // [sp+4Ch] [bp-50h] BYREF

  v46 = *(__int16 *)(*(_DWORD *)(a1 + 24) + 4);
  if ( v46 > 0 )
  {
    v12 = a8;
    v49 = a5 + 1;
    v13 = 0;
    v48 = 2 * (a5 + 1);
    v51 = a3;
    while ( 1 )
    {
      while ( sub_A2CAC(a1, v13) )
      {
LABEL_20:
        if ( ++v13 == v46 )
          return v12;
      }
      v15 = 24 * v13;
      if ( sub_A0274(a1, v13) )
      {
        ++v13;
        v12 = sub_B3550(
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v15 + 12),
                a2,
                a3 + *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v15) / 8LL,
                a4,
                a5,
                a6,
                src,
                v12,
                a1,
                a3,
                a11);
        if ( v13 == v46 )
          return v12;
      }
      else
      {
        if ( !sub_A0328(a1, v13) )
        {
          if ( v12 )
            sub_25A418(a4, ", ");
          if ( *src )
          {
            sub_25A418(a4, (const char *)&word_356638);
            sub_25A7A0(v48, a4);
          }
          else
          {
            v16 = sub_25A704(v48);
            sub_259B58(v16);
          }
          sub_B77D4(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v15 + 12));
          v17 = sub_9E5E8(*(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v15 + 16));
          v18 = sub_25A418(a4, "%.*s", v17, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v15 + 16));
          sub_B7814(v18);
          v19 = sub_25A6BC(" => ", a4);
          sub_B7834(v19);
          v20 = *(_DWORD *)(a1 + 24);
          v21 = *(_DWORD *)(v20 + 24);
          v22 = v21 + v15;
          v23 = *(_DWORD *)(v21 + v15 + 8);
          if ( (v23 & 0xFFFFFFF0) != 0 )
          {
            if ( (*(_WORD *)(v20 + 2) & 0x380) == 0x80
              && (v44 = *(_DWORD *)(v20 + 28), (__int16 *)v44 != &word_3B4A2C)
              && (v45 = *(_DWORD *)(v44 + 28)) != 0
              && (((int)*(unsigned __int8 *)(v45 + (v13 >> 3)) >> (v13 & 7)) & 1) != 0 )
            {
              v33 = sub_25A6BC("<optimized out or zero length>", a4);
            }
            else
            {
              v24 = *(_DWORD *)(v22 + 12);
              v25 = v23 >> 4;
              v26 = *(_DWORD *)(v21 + 24 * v13);
              if ( v24 )
              {
                v27 = *(_DWORD *)(v24 + 24);
                if ( *(_BYTE *)v27 == 12 && *(int *)(*(_DWORD *)(v27 + 24) + 12) >= 0 )
                  *(_BYTE *)(v27 + 1) |= 1u;
              }
              v28 = v26 & 7;
              if ( v26 <= 0 )
                v28 = -(-v26 & 7);
              v29 = sub_A75F8(0, a2, a3 + v26 / 8, v28, v25, v24);
              memcpy(dest, src, 0x4Cu);
              v30 = *(_DWORD *)(a1 + 24);
              dest[13] = 0;
              v31 = *(_DWORD *)(*(_DWORD *)(v30 + 24) + v15 + 12);
              v32 = sub_26BFE0(v29);
              v33 = sub_2669E8(v31, v49, v32, SHIDWORD(v32), 0, a4, v49, v29, dest, a11);
            }
          }
          else
          {
            v35 = memcpy(dest, src, 0x4Cu);
            v36 = v35;
            v37 = *(_DWORD *)(v21 + v15 + 4);
            v38 = *(_DWORD *)(v21 + 24 * v13);
            v39 = *(_DWORD *)(v22 + 12);
            v40 = (v37 >> 31) & 7;
            dest[13] = 0;
            v33 = sub_2669E8(
                    v39,
                    v37 + __CFADD__(v40, v38),
                    (__SPAIR64__(v37 + (unsigned int)__CFADD__(v40, v38), v40 + v38) >> 3) + v51,
                    (unsigned __int64)((__SPAIR64__(v37 + (unsigned int)__CFADD__(v40, v38), v40 + v38) >> 3) + v51) >> 32,
                    0,
                    a4,
                    v49,
                    a6,
                    v36,
                    a11);
          }
          v12 = 1;
          sub_B7854(v33);
          goto LABEL_20;
        }
        v41 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v15 + 12);
        v42 = sub_A9A34(v41, a9, a2 + a10);
        if ( v42 < 0 )
        {
          v12 = 0;
          goto LABEL_20;
        }
        ++v13;
        v43 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v15);
        v12 = sub_B3550(
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v41 + 24) + 24) + 24 * v42 + 12),
                a2,
                a3
              + ((((((int)v43[1] >> 31) & 7u) + *v43) >> 3) | ((v43[1] + __CFADD__(((int)v43[1] >> 31) & 7, *v43)) << 29))
              + *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v41 + 24) + 24) + 24 * v42) / 8LL,
                a4,
                a5,
                a6,
                src,
                v12,
                a9,
                a10,
                a11);
        if ( v13 == v46 )
          return v12;
      }
    }
  }
  return a8;
}
