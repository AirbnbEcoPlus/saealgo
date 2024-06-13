public static String RLE(String in) {
        if(in.equals("")) return "";
        String resultat = "";
        char precedent;
        int compteur = 0;
        precedent = in.charAt(0);
        for (char c : in.toCharArray()) {
            if (c == precedent) {
                if (compteur != 9) {
                    compteur++;
                    continue;
                } 
            } 
            resultat += "" + compteur + precedent;
            compteur = 1;
            precedent = c;
        }
        resultat += "" + compteur + precedent;
        return resultat;

    }



