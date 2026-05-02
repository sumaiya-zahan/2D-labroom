// ================= LEFT SIDE WINDOW WITH GLASS EFFECT =================

// Outer frame shadow
drawQuad(sp, VAO, VBO, -0.96f, 0.08f, -0.64f, 0.46f, 0.08f, 0.08f, 0.10f);

// Wooden window frame
drawQuad(sp, VAO, VBO, -0.94f, 0.10f, -0.66f, 0.44f, COL_WIN_FRAME);

// Glass pane (semi-transparent)
drawQuad(sp, VAO, VBO, -0.92f, 0.12f, -0.68f, 0.42f, COL_WIN_GLASS, 0.75f);

// Horizontal divider
drawQuad(sp, VAO, VBO, -0.92f, 0.265f, -0.68f, 0.280f, COL_WIN_FRAME);

// Vertical divider
drawQuad(sp, VAO, VBO, -0.806f, 0.12f, -0.794f, 0.42f, COL_WIN_FRAME);

// Glass reflection (diagonal shine effect)
float glassShine[] = {
    -0.92f, 0.38f, 0.0f,
    -0.80f, 0.42f, 0.0f,
    -0.76f, 0.42f, 0.0f,
    -0.92f, 0.38f, 0.0f,
    -0.76f, 0.42f, 0.0f,
    -0.88f, 0.34f, 0.0f,
};
drawShape(sp, VAO, VBO, glassShine, 6, COL_WIN_SHINE, 0.30f);

// Outside sky view through window
drawQuad(sp, VAO, VBO, -0.916f, 0.124f, -0.800f, 0.262f, 0.45f, 0.72f, 0.92f, 0.60f);
drawQuad(sp, VAO, VBO, -0.796f, 0.124f, -0.684f, 0.262f, 0.55f, 0.80f, 0.95f, 0.60f);
drawQuad(sp, VAO, VBO, -0.916f, 0.283f, -0.800f, 0.416f, 0.40f, 0.65f, 0.85f, 0.60f);
drawQuad(sp, VAO, VBO, -0.796f, 0.283f, -0.684f, 0.416f, 0.50f, 0.75f, 0.90f, 0.60f);


// ================= RIGHT SIDE WALL CLOCK =================

float clkX = 0.80f, clkY = 0.68f, clkR = 0.055f;

// Clock face
float clkFace[] = {
    clkX - clkR, clkY - clkR * 0.6f, 0.0f,
    clkX + clkR, clkY - clkR * 0.6f, 0.0f,
    clkX + clkR, clkY + clkR * 0.6f, 0.0f,
    clkX - clkR, clkY - clkR * 0.6f, 0.0f,
    clkX + clkR, clkY + clkR * 0.6f, 0.0f,
    clkX - clkR, clkY + clkR * 0.6f, 0.0f,
};
drawShape(sp, VAO, VBO, clkFace, 6, 0.92f, 0.90f, 0.85f);

// Clock border
float clkBorder[] = {
    clkX - clkR - 0.008f, clkY - clkR * 0.65f, 0.0f,
    clkX + clkR + 0.008f, clkY - clkR * 0.65f, 0.0f,
    clkX + clkR + 0.008f, clkY + clkR * 0.65f, 0.0f,
    clkX - clkR - 0.008f, clkY - clkR * 0.65f, 0.0f,
    clkX + clkR + 0.008f, clkY + clkR * 0.65f, 0.0f,
    clkX - clkR - 0.008f, clkY + clkR * 0.65f, 0.0f,
};
drawShape(sp, VAO, VBO, clkBorder, 6, 0.25f, 0.15f, 0.05f);

// Redraw clock face for proper layering
drawShape(sp, VAO, VBO, clkFace, 6, 0.92f, 0.90f, 0.85f);

// Clock hands
drawQuad(sp, VAO, VBO, clkX - 0.004f, clkY, clkX + 0.004f, clkY + clkR * 0.50f, 0.15f, 0.15f, 0.18f);
drawQuad(sp, VAO, VBO, clkX - 0.003f, clkY - clkR * 0.35f, clkX + 0.003f, clkY, 0.25f, 0.15f, 0.05f);


// ================= NOTICE BOARD =================

// Board frame
drawQuad(sp, VAO, VBO, -0.95f, 0.50f, -0.65f, 0.84f, 0.28f, 0.18f, 0.06f);

// Board surface (cork texture color)
drawQuad(sp, VAO, VBO, -0.93f, 0.52f, -0.67f, 0.82f, 0.85f, 0.72f, 0.50f);

// Papers pinned on board
drawQuad(sp, VAO, VBO, -0.92f, 0.66f, -0.78f, 0.80f, 0.95f, 0.95f, 0.90f);
drawQuad(sp, VAO, VBO, -0.76f, 0.66f, -0.68f, 0.80f, 0.85f, 0.92f, 0.96f);
drawQuad(sp, VAO, VBO, -0.92f, 0.54f, -0.80f, 0.64f, 0.96f, 0.88f, 0.72f);
drawQuad(sp, VAO, VBO, -0.78f, 0.54f, -0.68f, 0.64f, 0.90f, 0.78f, 0.78f);

// Push pins (small colored squares)
drawQuad(sp, VAO, VBO, -0.854f, 0.794f, -0.838f, 0.808f, 0.90f, 0.20f, 0.20f);
drawQuad(sp, VAO, VBO, -0.714f, 0.794f, -0.698f, 0.808f, 0.20f, 0.55f, 0.85f);
drawQuad(sp, VAO, VBO, -0.854f, 0.634f, -0.838f, 0.648f, 0.20f, 0.75f, 0.35f);
drawQuad(sp, VAO, VBO, -0.744f, 0.634f, -0.728f, 0.648f, 0.90f, 0.70f, 0.10f);


// ================= RENDER LOOP END =================
glfwSwapBuffers(window);
glfwPollEvents();


// ================= CLEANUP =================
glDeleteVertexArrays(1, &VAO);
glDeleteBuffers(1, &VBO);
glDeleteProgram(sp);
glfwTerminate();
return 0;
}


// ================= DRAWING UTILITIES =================

// Draws a custom shape using vertex data and RGBA color
void drawShape(unsigned int sp, unsigned int VAO, unsigned int VBO,
    float* verts, int count, float r, float g, float b, float alpha)
{
    int loc = glGetUniformLocation(sp, "uColor");
    glUniform4f(loc, r, g, b, alpha);

    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);

    // Update vertex buffer dynamically
    glBufferSubData(GL_ARRAY_BUFFER, 0, count * 3 * sizeof(float), verts);

    // Draw triangles
    glDrawArrays(GL_TRIANGLES, 0, count);

    glBindVertexArray(0);
}

// Helper function to draw rectangles using two triangles
void drawQuad(unsigned int sp, unsigned int VAO, unsigned int VBO,
    float x1, float y1, float x2, float y2,
    float r, float g, float b, float alpha)
{
    float v[] = {
        x1,y1,0, x2,y1,0, x2,y2,0,
        x1,y1,0, x2,y2,0, x1,y2,0,
    };
    drawShape(sp, VAO, VBO, v, 6, r, g, b, alpha);
}


// ================= INPUT & WINDOW HANDLING =================

// Handle keyboard input
void processInput(GLFWwindow* window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

// Adjust viewport on window resize
void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}
