int __fastcall sub_89534(int result, int a2, int a3, int a4)
{
  _DWORD **v4; // r4
  _BOOL4 v5; // r3
  int v6; // r3
  int v7; // r0
  _BOOL4 v8; // r1
  _BOOL4 v9; // r0
  _BOOL4 v10; // r3
  int v11; // r3
  int v12; // r0
  _BOOL4 v13; // r1
  _BOOL4 v14; // r0
  _BOOL4 v15; // r3
  int v16; // r1
  int v17; // r3
  int v18; // r1
  int v19; // r1
  unsigned int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r1
  bool v25; // zf
  bool v26; // zf

  v4 = (_DWORD **)result;
  if ( result )
  {
    switch ( a2 )
    {
      case 16:
        *(_DWORD *)(result + 204) = a4;
        return 1;
      case 20:
        return sub_DFC2C(*(_DWORD *)(result + 20));
      case 21:
        return *(_DWORD *)(result + 56);
      case 22:
        return *(_DWORD *)(result + 64);
      case 23:
        return *(_DWORD *)(result + 60);
      case 24:
        return *(_DWORD *)(result + 68);
      case 25:
        return *(_DWORD *)(result + 76);
      case 26:
        return *(_DWORD *)(result + 72);
      case 27:
        return *(_DWORD *)(result + 92);
      case 28:
        return *(_DWORD *)(result + 96);
      case 29:
        return *(_DWORD *)(result + 80);
      case 30:
        return *(_DWORD *)(result + 84);
      case 31:
        return *(_DWORD *)(result + 88);
      case 33:
        v18 = a3 | *(_DWORD *)(result + 176);
        *(_DWORD *)(result + 176) = v18;
        return v18;
      case 40:
        return *(_DWORD *)(result + 196);
      case 41:
        v17 = *(_DWORD *)(result + 196);
        *(_DWORD *)(result + 196) = a3;
        return v17;
      case 42:
        if ( a3 < 0 )
          return 0;
        v23 = *(_DWORD *)(result + 24);
        *(_DWORD *)(result + 24) = a3;
        return v23;
      case 43:
        return *(_DWORD *)(result + 24);
      case 44:
        v22 = *(_DWORD *)(result + 36);
        *(_DWORD *)(result + 36) = a3;
        return v22;
      case 45:
        return *(_DWORD *)(result + 36);
      case 50:
        return *(_DWORD *)(result + 188);
      case 51:
        if ( a3 < 0 )
          return 0;
        v21 = *(_DWORD *)(result + 188);
        *(_DWORD *)(result + 188) = a3;
        return v21;
      case 52:
        if ( (unsigned int)(a3 - 512) > 0x3E00 )
          return 0;
        v20 = *(_DWORD *)(result + 276);
        *(_DWORD *)(result + 280) = a3;
        if ( a3 < v20 )
          goto LABEL_16;
        return 1;
      case 78:
        v19 = *(_DWORD *)(result + 176) & ~a3;
        *(_DWORD *)(result + 176) = v19;
        return v19;
      case 99:
        v24 = *(_DWORD *)(result + 192);
        result = a3 | *(_DWORD *)(v24 + 16);
        *(_DWORD *)(v24 + 16) = result;
        return result;
      case 100:
        v16 = *(_DWORD *)(result + 192);
        result = *(_DWORD *)(v16 + 16) & ~a3;
        *(_DWORD *)(v16 + 16) = result;
        return result;
      case 123:
        v11 = *(_DWORD *)(result + 184);
        if ( a3 == 256 )
        {
          if ( v11 == 256 || v11 >> 8 == 254 )
            return sub_9CB40(**v4, a3, v4 + 45) != 0;
          v13 = 1;
          goto LABEL_33;
        }
        v12 = a3 >> 8;
        v13 = a3 >> 8 == 254;
        if ( v11 != 256 && v11 >> 8 != 254 )
        {
LABEL_33:
          if ( v11 )
            v14 = v13;
          else
            v14 = 0;
          if ( v14 )
            return 0;
          if ( !v13 && a3 )
          {
            if ( v11 )
            {
              v15 = v11 > 767;
              if ( a3 > 767 )
                v15 = 0;
            }
            else
            {
              v15 = a3 < 768;
            }
            if ( v15 )
              return 0;
          }
          return sub_9CB40(**v4, a3, v4 + 45) != 0;
        }
        v25 = v12 == 254;
        if ( v12 != 254 )
          v25 = a3 == 0;
        if ( !v25 )
          return 0;
        return sub_9CB40(**v4, a3, v4 + 45) != 0;
      case 124:
        v6 = *(_DWORD *)(result + 180);
        if ( v6 == 256 )
        {
          if ( a3 == 256 || a3 >> 8 == 254 )
            goto LABEL_77;
          v8 = 1;
          goto LABEL_20;
        }
        v7 = v6 >> 8;
        v8 = v6 >> 8 == 254;
        if ( a3 != 256 && a3 >> 8 != 254 )
        {
LABEL_20:
          if ( a3 )
            v9 = v8;
          else
            v9 = 0;
          if ( v9 )
            return 0;
          if ( !v8 && v6 )
          {
            if ( a3 )
            {
              v10 = v6 <= 767;
              if ( a3 <= 767 )
                v10 = 0;
            }
            else
            {
              v10 = v6 < 768;
            }
            if ( v10 )
              return 0;
          }
          goto LABEL_77;
        }
        v26 = v7 == 254;
        if ( v7 != 254 )
          v26 = v6 == 0;
        if ( !v26 )
          return 0;
LABEL_77:
        result = sub_9CB40(**v4, a3, v4 + 46) != 0;
        break;
      case 125:
        v5 = a3 == 0;
        if ( *(_DWORD *)(result + 280) < (unsigned int)a3 )
          v5 = 1;
        if ( v5 )
          return 0;
LABEL_16:
        *(_DWORD *)(result + 276) = a3;
        return 1;
      case 126:
        if ( (unsigned int)(a3 - 1) > 0x1F )
          return 0;
        *(_DWORD *)(result + 284) = a3;
        return 1;
      case 130:
        return *(_DWORD *)(result + 180);
      case 131:
        return *(_DWORD *)(result + 184);
      default:
        return (*(int (__fastcall **)(int))(*(_DWORD *)result + 72))(result);
    }
  }
  else if ( a2 == 98 || a2 == 102 )
  {
    return sub_A457C(0, a4, 0);
  }
  else if ( a2 == 92 )
  {
    return sub_A2A3C(0, 0, a4);
  }
  return result;
}
