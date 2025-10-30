int __fastcall sub_2F7224(
        int a1,
        char **a2,
        unsigned __int8 *a3,
        int a4,
        int (__fastcall *a5)(int, int, int, int, int))
{
  char *v6; // r2
  char *v7; // r4
  int v8; // r6
  unsigned int v10; // r8
  unsigned __int8 v12; // r7
  char *v13; // r4
  char *v14; // r10
  char *v15; // r4
  int v16; // r8
  int v17; // r0
  char *v18; // r4
  int *v19; // r9
  int *v20; // r11
  unsigned int v21; // r7
  int v23; // [sp+Ch] [bp-50h]
  unsigned int v24; // [sp+10h] [bp-4Ch]
  char *v25; // [sp+14h] [bp-48h]
  unsigned int v26; // [sp+18h] [bp-44h]
  int v29; // [sp+24h] [bp-38h]
  int v30; // [sp+2Ch] [bp-30h] BYREF
  char v31; // [sp+30h] [bp-2Ch] BYREF
  char v32; // [sp+34h] [bp-28h] BYREF
  int v33; // [sp+38h] [bp-24h] BYREF
  int v34; // [sp+40h] [bp-1Ch]
  int v35; // [sp+48h] [bp-14h] BYREF
  int v36; // [sp+4Ch] [bp-10h] BYREF
  int v37; // [sp+50h] [bp-Ch] BYREF
  int v38; // [sp+54h] [bp-8h] BYREF

  v6 = *a2;
  v7 = *a2 + 1;
  v8 = *(_DWORD *)(a1 + 8);
  v25 = v7;
  if ( a3 < (unsigned __int8 *)v7 || (v10 = (unsigned __int8)*v6, !*v6) )
  {
    if ( sub_2ABC24(v8, v7, &v30, 0, (unsigned int)a3) )
    {
      sub_2A6A5C("Dwarf Error: Zero format count.");
      ((void (__fastcall *)(int))loc_2A6C48)(17);
      return 0;
    }
    v14 = &v7[v30];
    goto LABEL_20;
  }
  v12 = 0;
  do
  {
    ++v12;
    sub_2ABC24(v8, v7, &v30, 0, (unsigned int)a3);
    v13 = &v7[v30];
    sub_2ABC24(v8, v13, &v30, 0, (unsigned int)a3);
    v7 = &v13[v30];
  }
  while ( v12 < v10 );
  v26 = sub_2ABC24(v8, v7, &v30, 0, (unsigned int)a3);
  v14 = &v7[v30];
  if ( a3 - (unsigned __int8 *)&v7[v30] >= v26 )
  {
    if ( v26 )
    {
      v24 = v10;
      v29 = 0;
      v23 = a1;
      while ( 1 )
      {
        v15 = v25;
        v16 = 0;
        v35 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        while ( 2 )
        {
          v17 = sub_2ABC24(v8, v15, &v30, 0, (unsigned int)a3);
          v18 = &v15[v30];
          switch ( v17 )
          {
            case 1:
              v19 = (int *)&v32;
              v20 = &v35;
              goto LABEL_14;
            case 2:
              v19 = &v36;
              v20 = (int *)&v31;
              goto LABEL_14;
            case 3:
              v19 = &v37;
              v20 = (int *)&v31;
              goto LABEL_14;
            case 4:
              v19 = &v38;
              v20 = (int *)&v31;
              goto LABEL_14;
            case 5:
              v19 = (int *)&v32;
              v20 = (int *)&v31;
LABEL_14:
              v21 = sub_2ABC24(v8, v18, &v30, 0, (unsigned int)a3);
              v15 = &v18[v30];
              v14 = (char *)sub_2F68C8(&v33, v21, 0, v23, v14, a3);
              if ( !v14 )
                return 0;
              switch ( v21 )
              {
                case 5u:
                case 6u:
                case 7u:
                case 0xBu:
                case 0xFu:
                  *v19 = v34;
                  break;
                case 8u:
                case 0x1Fu:
                  *v20 = v34;
                  break;
                default:
                  break;
              }
              if ( (unsigned __int8)++v16 < v24 )
                continue;
              if ( !a5(a4, v35, v36, v37, v38) )
                return 0;
              if ( v26 <= ++v29 )
                goto LABEL_20;
              break;
            default:
              sub_2A6A5C("Dwarf Error: Unknown format content type %Lu.", v17);
              ((void (__fastcall *)(int))loc_2A6C48)(17);
              return 0;
          }
          break;
        }
      }
    }
LABEL_20:
    *a2 = v14;
    return 1;
  }
  sub_2A6A5C("Dwarf Error: data count (%Lx) larger than buffer size.", v26);
  ((void (__fastcall *)(int))loc_2A6C48)(17);
  return 0;
}
