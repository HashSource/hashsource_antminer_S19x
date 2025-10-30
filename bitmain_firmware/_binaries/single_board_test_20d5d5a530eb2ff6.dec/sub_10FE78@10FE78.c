char *__fastcall sub_10FE78(int a1)
{
  char *result; // r0

  switch ( a1 )
  {
    case 0:
      result = "ok";
      break;
    case 1:
      result = "unspecified certificate verification error";
      break;
    case 2:
      result = "unable to get issuer certificate";
      break;
    case 3:
      result = "unable to get certificate CRL";
      break;
    case 4:
      result = "unable to decrypt certificate's signature";
      break;
    case 5:
      result = "unable to decrypt CRL's signature";
      break;
    case 6:
      result = "unable to decode issuer public key";
      break;
    case 7:
      result = "certificate signature failure";
      break;
    case 8:
      result = "CRL signature failure";
      break;
    case 9:
      result = "certificate is not yet valid";
      break;
    case 10:
      result = "certificate has expired";
      break;
    case 11:
      result = "CRL is not yet valid";
      break;
    case 12:
      result = "CRL has expired";
      break;
    case 13:
      result = "format error in certificate's notBefore field";
      break;
    case 14:
      result = "format error in certificate's notAfter field";
      break;
    case 15:
      result = "format error in CRL's lastUpdate field";
      break;
    case 16:
      result = "format error in CRL's nextUpdate field";
      break;
    case 17:
      result = "out of memory";
      break;
    case 18:
      result = "self signed certificate";
      break;
    case 19:
      result = "self signed certificate in certificate chain";
      break;
    case 20:
      result = "unable to get local issuer certificate";
      break;
    case 21:
      result = "unable to verify the first certificate";
      break;
    case 22:
      result = "certificate chain too long";
      break;
    case 23:
      result = "certificate revoked";
      break;
    case 24:
      result = "invalid CA certificate";
      break;
    case 25:
      result = "path length constraint exceeded";
      break;
    case 26:
      result = "unsupported certificate purpose";
      break;
    case 27:
      result = "certificate not trusted";
      break;
    case 28:
      result = "certificate rejected";
      break;
    case 29:
      result = "subject issuer mismatch";
      break;
    case 30:
      result = "authority and subject key identifier mismatch";
      break;
    case 31:
      result = "authority and issuer serial number mismatch";
      break;
    case 32:
      result = "key usage does not include certificate signing";
      break;
    case 33:
      result = "unable to get CRL issuer certificate";
      break;
    case 34:
      result = "unhandled critical extension";
      break;
    case 35:
      result = "key usage does not include CRL signing";
      break;
    case 36:
      result = "unhandled critical CRL extension";
      break;
    case 37:
      result = "invalid non-CA certificate (has CA markings)";
      break;
    case 38:
      result = "proxy path length constraint exceeded";
      break;
    case 39:
      result = "key usage does not include digital signature";
      break;
    case 40:
      result = "proxy certificates not allowed, please set the appropriate flag";
      break;
    case 41:
      result = "invalid or inconsistent certificate extension";
      break;
    case 42:
      result = "invalid or inconsistent certificate policy extension";
      break;
    case 43:
      result = "no explicit policy";
      break;
    case 44:
      result = "Different CRL scope";
      break;
    case 45:
      result = "Unsupported extension feature";
      break;
    case 46:
      result = "RFC 3779 resource not subset of parent's resources";
      break;
    case 47:
      result = "permitted subtree violation";
      break;
    case 48:
      result = "excluded subtree violation";
      break;
    case 49:
      result = "name constraints minimum and maximum not supported";
      break;
    case 50:
      result = "application verification failure";
      break;
    case 51:
      result = "unsupported name constraint type";
      break;
    case 52:
      result = "unsupported or invalid name constraint syntax";
      break;
    case 53:
      result = "unsupported or invalid name syntax";
      break;
    case 54:
      result = "CRL path validation error";
      break;
    case 55:
      result = "Path Loop";
      break;
    case 56:
      result = "Suite B: certificate version invalid";
      break;
    case 57:
      result = "Suite B: invalid public key algorithm";
      break;
    case 58:
      result = "Suite B: invalid ECC curve";
      break;
    case 59:
      result = "Suite B: invalid signature algorithm";
      break;
    case 60:
      result = "Suite B: curve not allowed for this LOS";
      break;
    case 61:
      result = "Suite B: cannot sign P-384 with P-256";
      break;
    case 62:
      result = "Hostname mismatch";
      break;
    case 63:
      result = "Email address mismatch";
      break;
    case 64:
      result = "IP address mismatch";
      break;
    case 65:
      result = "No matching DANE TLSA records";
      break;
    case 66:
      result = "EE certificate key too weak";
      break;
    case 67:
      result = "CA certificate key too weak";
      break;
    case 68:
      result = "CA signature digest algorithm too weak";
      break;
    case 69:
      result = "Invalid certificate verification context";
      break;
    case 70:
      result = "Issuer certificate lookup error";
      break;
    case 71:
      result = "Certificate Transparency required, but no valid SCTs found";
      break;
    case 72:
      result = "proxy subject name violation";
      break;
    case 73:
      result = "OCSP verification needed";
      break;
    case 74:
      result = "OCSP verification failed";
      break;
    case 75:
      result = "OCSP unknown cert";
      break;
    case 79:
      result = "Certificate public key has explicit ECC parameters";
      break;
    default:
      result = "unknown certificate verification error";
      break;
  }
  return result;
}
