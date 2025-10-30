int __fastcall sub_2C96EC(int result, _DWORD *a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r12
  int v6; // r7
  _DWORD *v7; // r4
  int v8; // r1
  int v9; // r8
  int v10; // r3
  int v11; // r3
  int v12; // r9
  int v13; // r10
  unsigned int v14; // r11
  int *v15; // r2
  int v16; // r5
  int v17; // r2
  unsigned __int8 *v18; // r2
  int v19; // r0
  int v20; // r2
  int *v21; // r12
  int **v22; // r4
  int v23; // r5
  int v24; // [sp+0h] [bp-48h]
  int (__fastcall *v25)(int, _DWORD *, int); // [sp+4h] [bp-44h]
  int v26; // [sp+8h] [bp-40h]
  int v28; // [sp+10h] [bp-38h] BYREF
  _DWORD v29[13]; // [sp+14h] [bp-34h] BYREF

  if ( !*a3 && (a2[5] & 4) != 0 )
  {
    v3 = a2[19];
    if ( v3 )
    {
      if ( a2[18] )
      {
        v4 = a2[35];
        v6 = result;
        v7 = *(_DWORD **)(v4 + 76);
        if ( !v7 )
          v7 = *(_DWORD **)(v4 + 60);
        v8 = v7[10] * v3;
        v7[6] = v8;
        result = sub_2ACBF4(result, v8);
        v9 = result;
        v7[12] = result;
        if ( !result )
        {
LABEL_26:
          *a3 = 1;
          return result;
        }
        v10 = v7[1];
        if ( v10 == 4 )
        {
          v26 = 12;
          v25 = sub_2C8564;
        }
        else
        {
          if ( v10 != 9 )
            sub_2A6BF0((int)"elfcode.h", 914, (int)"bfd_elf32_write_relocs");
          v26 = 8;
          v25 = sub_2C8528;
        }
        v11 = (*(_DWORD *)(v6 + 40) >> 5) & 0x42;
        if ( v11 )
          v11 = a2[7];
        v24 = v11;
        if ( a2[19] )
        {
          v12 = 0;
          v13 = 0;
          v14 = 0;
          while ( 1 )
          {
            v22 = *(int ***)(a2[18] + 4 * v14);
            v15 = *v22;
            v28 = **v22;
            v23 = v28;
            if ( v28 == v13 )
            {
              v16 = v12;
            }
            else if ( *(char ***)(v28 + 16) != &off_470950 || *(_DWORD *)(v28 + 8) )
            {
              result = sub_2D4BA0(v6, &v28);
              v12 = result;
              if ( result < 0 )
                goto LABEL_26;
              v15 = *v22;
              v13 = v23;
              v16 = result;
            }
            else
            {
              v16 = 0;
            }
            v17 = *(_DWORD *)*v15;
            if ( v17 )
            {
              if ( *(_DWORD *)(v17 + 4) != *(_DWORD *)(v6 + 4) )
              {
                result = sub_2D89A4(v6, v22);
                if ( !result )
                  goto LABEL_26;
              }
            }
            v18 = (unsigned __int8 *)v22[3];
            if ( !v18 )
              goto LABEL_26;
            ++v14;
            v19 = *v18;
            v20 = v9;
            v9 += v26;
            v21 = v22[2];
            v29[0] = (char *)v22[1] + v24;
            v29[1] = v19 + (v16 << 8);
            v29[2] = v21;
            result = v25(v6, v29, v20);
            if ( v14 >= a2[19] )
              return result;
          }
        }
      }
    }
  }
  return result;
}
