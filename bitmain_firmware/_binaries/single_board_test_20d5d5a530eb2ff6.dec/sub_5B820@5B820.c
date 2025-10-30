int __fastcall sub_5B820(void **a1, int a2)
{
  bool v2; // zf
  int result; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  int v8; // r0
  unsigned int v9; // r6
  size_t v10; // r0
  int *v11; // r0
  unsigned int v12; // r4
  _DWORD *v13; // r6
  _DWORD *v14; // r3
  unsigned __int8 *v15; // r1
  size_t v16; // [sp+0h] [bp-48h] BYREF
  unsigned __int8 ptr[20]; // [sp+4h] [bp-44h] BYREF
  int v18; // [sp+18h] [bp-30h] BYREF

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 )
    return -1;
  v6 = calloc(1u, 0x18u);
  v7 = v6;
  *a1 = v6;
  result = -9;
  if ( v7 )
  {
    v8 = sub_575A0();
    v9 = sub_58178(v7, v8);
    if ( sub_57568(v9) )
    {
      free(*a1);
      return v9;
    }
    else
    {
      *((_DWORD *)*a1 + 1) = a2;
      v10 = fread(ptr, 1u, 0x13u, *((FILE **)*a1 + 1));
      v2 = v10 == 19;
      v16 = v10;
      v11 = (int *)*a1;
      if ( v2 )
      {
        v12 = sub_58AC8(*v11, &v18, ptr, &v16);
        if ( sub_57568(v12) )
        {
          sub_581A4(*(_DWORD **)*a1);
          free(*a1);
          return v12;
        }
        else
        {
          switch ( v18 )
          {
            case 0:
            case 4:
              *((_DWORD *)*a1 + 5) = 0x10000;
              goto LABEL_14;
            case 5:
              *((_DWORD *)*a1 + 5) = 0x40000;
              goto LABEL_14;
            case 6:
              *((_DWORD *)*a1 + 5) = 0x100000;
              goto LABEL_14;
            case 7:
              *((_DWORD *)*a1 + 5) = 0x400000;
LABEL_14:
              v13 = *a1;
              v13[2] = malloc(*((_DWORD *)*a1 + 5));
              v14 = *a1;
              if ( *((_DWORD *)*a1 + 2) )
              {
                v15 = &ptr[v16];
                v14[4] = 19 - v16;
                memcpy(*((void **)*a1 + 2), v15, *((_DWORD *)*a1 + 4));
                result = v12;
              }
              else
              {
                sub_581A4((_DWORD *)*v14);
                free(a1);
                result = -9;
              }
              break;
            default:
              sub_581A4(*(_DWORD **)*a1);
              free(*a1);
              result = -2;
              break;
          }
        }
      }
      else
      {
        free(v11);
        return -1;
      }
    }
  }
  return result;
}
