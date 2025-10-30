int __fastcall sub_2B580C(unsigned int a1, int *a2, _DWORD *a3, int *a4)
{
  int v6; // r5
  int v8; // r2
  int v9; // r7
  int v10; // r4
  int v11; // r1
  int v12; // r4
  unsigned int v15; // r10
  int v16; // r11
  unsigned int v17; // r0
  int v18; // r3
  int v19; // r7
  int v20; // r0
  unsigned int v21; // r5
  unsigned int v22; // r3
  int v23; // r3
  int v24; // r4
  unsigned int v25; // r4
  int v26; // r0
  int v27; // r4

  v6 = a1 & 0xF00;
  if ( (a1 & 0xF000E10) != 0xE000A00 )
  {
    if ( (a1 & 0xFE00ED0) == 0xC400A10 )
    {
      if ( v6 != 2816 )
      {
        if ( (a1 & 0x100000) != 0 )
          return 1;
        v8 = *a2;
        v9 = 1;
        v10 = (2 * (_BYTE)a1) & 0x1E | (a1 >> 5) & 1;
        v11 = v10 + 1;
        v12 = v8 | (1 << v10);
        *a2 = v12;
        if ( v11 == 32 )
          sub_2B57F0(a2, 32);
        else
          *a2 = v12 | (1 << v11);
        return v9;
      }
      v17 = sub_2B57D0(a1, 0, 5);
      if ( v18 )
        return 1;
    }
    else
    {
      if ( (a1 & 0xE100E00) == 0xC100A00 )
      {
        if ( v6 != 2816 )
        {
          v21 = (a1 >> 11) & 0x1E | (a1 >> 22) & 1;
          switch ( (a1 >> 22) & 6 | (a1 >> 21) & 1 )
          {
            case 0u:
              goto LABEL_74;
            case 2u:
            case 3u:
            case 5u:
              v24 = (unsigned __int8)a1;
              goto LABEL_42;
            case 4u:
            case 6u:
              goto LABEL_38;
            default:
              return 3;
          }
        }
        v21 = sub_2B57D0(a1, 12, 22);
        switch ( v23 )
        {
          case 0:
LABEL_74:
            sub_2A6BF0((int)"elf32-arm.c", 7981, (int)"bfd_arm_vfp11_insn_decode");
          case 2:
          case 3:
          case 5:
            v24 = (unsigned __int8)a1 >> 1;
LABEL_42:
            v25 = v24 + v21;
            if ( v25 > v21 )
            {
              do
              {
                if ( v21 <= 0x1F )
                {
                  *a2 |= 1 << v21;
                }
                else if ( v21 <= 0x2F )
                {
                  sub_2B57F0(a2, v21);
                }
                ++v21;
              }
              while ( v21 != v25 );
            }
            return 1;
          case 4:
          case 6:
LABEL_38:
            if ( v21 <= 0x1F )
            {
              v9 = 1;
              *a2 |= 1 << v21;
            }
            else
            {
              if ( v21 > 0x2F )
                return 1;
              sub_2B57F0(a2, v21);
              v9 = 1;
            }
            break;
          default:
            return 3;
        }
        return v9;
      }
      if ( (a1 & 0xF100E10) != 0xE000A10 )
        return 3;
      if ( v6 != 2816 )
      {
        if ( ((a1 >> 21) & 7) > 1 )
          return 1;
        v17 = (a1 >> 15) & 0x1E | (a1 >> 7) & 1;
LABEL_34:
        v9 = 1;
        *a2 |= 1 << v17;
        return v9;
      }
      v17 = sub_2B57D0(a1, 16, 7);
      if ( v22 > 1 )
        return 1;
    }
    if ( v17 > 0x1F )
    {
      if ( v17 > 0x2F )
        return 1;
      sub_2B57F0(a2, v17);
      return 1;
    }
    goto LABEL_34;
  }
  if ( v6 != 2816 )
  {
    v15 = (a1 >> 11) & 0x1E | (a1 >> 22) & 1;
    v16 = (a1 >> 5) & 1 | (2 * (_BYTE)a1) & 0x1E;
    switch ( (a1 >> 19) & 6 | (a1 >> 20) & 8 | (a1 >> 6) & 1 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
        goto LABEL_49;
      case 4u:
      case 5u:
      case 6u:
      case 7u:
        goto LABEL_20;
      case 8u:
        goto LABEL_27;
      case 0xFu:
        goto LABEL_26;
      default:
        return 3;
    }
  }
  v15 = sub_2B57D0(a1, 12, 22);
  v16 = sub_2B57D0(a1, 0, 5);
  switch ( (a1 >> 20) & 8 | (a1 >> 19) & 6 | (a1 >> 6) & 1 )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
      if ( v15 <= 0x1F )
      {
LABEL_49:
        *a2 |= 1 << v15;
      }
      else if ( v15 <= 0x2F )
      {
        sub_2B57F0(a2, v15);
      }
      *a3 = v15;
      if ( v6 == 2816 )
        v26 = sub_2B57D0(a1, 16, 7);
      else
        v26 = (a1 >> 15) & 0x1E | (a1 >> 7) & 1;
      a3[1] = v26;
      a3[2] = v16;
      v9 = 0;
      *a4 = 3;
      return v9;
    case 4u:
    case 5u:
    case 6u:
    case 7u:
LABEL_20:
      v19 = 0;
      break;
    case 8u:
LABEL_27:
      v19 = 2;
      break;
    case 0xFu:
LABEL_26:
      switch ( (a1 >> 15) & 0x1E | (a1 >> 7) & 1 )
      {
        case 0u:
        case 1u:
        case 2u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0x10u:
        case 0x11u:
        case 0x18u:
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
          v9 = 0;
          *a4 = 0;
          break;
        case 3u:
          if ( v15 <= 0x1F )
          {
            v9 = 2;
            *a2 |= 1 << v15;
          }
          else
          {
            if ( v15 <= 0x2F )
              sub_2B57F0(a2, v15);
            v9 = 2;
          }
          break;
        case 0xFu:
          if ( v15 > 0x1F )
          {
            if ( v15 <= 0x2F )
              sub_2B57F0(a2, v15);
          }
          else
          {
            *a2 |= 1 << v15;
          }
          v27 = a1 & 0x100;
          v9 = 0;
          if ( v27 )
          {
            v27 = 1;
            *a3 = v16;
          }
          *a4 = v27;
          break;
        default:
          return 3;
      }
      return v9;
    default:
      return 3;
  }
  if ( v15 > 0x1F )
  {
    if ( v15 <= 0x2F )
      sub_2B57F0(a2, v15);
  }
  else
  {
    *a2 |= 1 << v15;
  }
  if ( v6 == 2816 )
    v20 = sub_2B57D0(a1, 16, 7);
  else
    v20 = (a1 >> 15) & 0x1E | (a1 >> 7) & 1;
  *a3 = v20;
  a3[1] = v16;
  *a4 = 2;
  return v19;
}
